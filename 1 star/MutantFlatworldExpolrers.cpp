#include <iostream>
using namespace std;
#include <string>

int main(){
    int x_max,y_max;
    int robot_x,robot_y,robot_d;
    char robot_dir;
    string instruction;
    string direction="NESW";

    cin>>x_max>>y_max;

    bool scent[x_max+2][y_max+2]={false};
    while(cin >> robot_x >> robot_y >>robot_dir){
        bool lost = false;
        cin.ignore();
        getline(cin,instruction);
        for (int i=0;i<4;i++)
			if (robot_dir == direction[i]) robot_d = i;
        
        for(int i = 0; i<instruction.size();i++){
            if(instruction[i] == 'L'){
                robot_d=(robot_d+3)%4;
                continue;
            }
            else if(instruction[i] == 'R') {
                robot_d=(robot_d+1)%4;
                continue;
            }
           
            else if(instruction[i] == 'F'){
                int next_x = robot_x, next_y = robot_y;
                if (robot_d == 0) next_y++;      
                else if (robot_d == 1) next_x++; 
                else if (robot_d == 2) next_y--; 
                else if (robot_d == 3) next_x--;

                if(next_x>x_max||next_y>y_max||next_x<0||next_y<0){
                    if(scent[next_x+1][next_y+1]) continue;
                    else {
                       cout<<robot_x<<" "<<robot_y<<" "<<direction[robot_d]<<" LOST"<<endl;
                       lost = true;
                       scent[next_x+1][next_y+1]=true;
                       break; 
                    }
                }

                robot_x=next_x;
                robot_y=next_y;
            }
            
            
        }
        if(!lost) cout<<robot_x<<" "<<robot_y<<" "<<direction[robot_d]<<endl;
    }
    
}