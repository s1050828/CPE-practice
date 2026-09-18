#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> Area;
int x_max,y_max;

int watersize_count(const int i,const int j){
    if(Area[i][j] == '1') return 0;

    //cout << "water_loc : " << i <<" "<<j<<endl; 
    int water_size = 1;
    Area[i][j] = '1';
    if(i - 1 >= 0 ) water_size += watersize_count(i-1,j);
    if(j - 1 >= 0) water_size += watersize_count(i,j-1);
    if(i + 1 < x_max) water_size += watersize_count(i+1,j);
    if(j + 1 < y_max) water_size += watersize_count(i,j+1);
    

    return water_size;
} 
int main(){
    int T;
    string str;
    cin >> T;
    cin.ignore();
    getline(cin,str);

    for (int i = 0 ; i < T ; i++){
        int I,J;
        cin >>I >>J;
        cin.ignore();

        while(getline(cin,str) && str!=""){
            if(str.size() == 5 &&str[2] == ' ') break;
            else {Area.push_back(str);}
        }

        x_max = Area.size();
        y_max = Area[0].size();

        int size = watersize_count(I-1,J-1);

        cout << size <<"\n\n";
        Area.clear();
    }
    return 0;
}
