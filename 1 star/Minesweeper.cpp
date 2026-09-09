#include <iostream>
using namespace std;
int main(){
    int n,m,field=1;
    while(cin >> n >>  m){
        if(m == 0 && n ==0) break;
        else if(m == 0) cout <<"m=0,error"<<endl;
        
        cin.ignore();

        string block_num = "012345678";
        string map[n];
        for(int i = 0;i < n ;i++){
            getline(cin,map[i]);
        }
        
        for (int i = 0; i < n ;i ++){
            for(int j = 0; j < m ;j ++){
                int bomb_num=0;
                if(map[i][j]=='.'){
                    if(i - 1 >= 0 && j - 1 >= 0) {
                        if(map[i-1][j-1] == '*') bomb_num++;
                    }
                    if( j - 1 >= 0) {
                        if(map[i][j-1] == '*' ) bomb_num++;
                    }

                    if( i - 1 >= 0 ) {
                        if(map[i-1][j] == '*' ) bomb_num++;
                    }

                    if( i + 1 < n && j + 1 < m) {
                        if(map[i+1][j+1] == '*' )bomb_num++;
                    }

                    if( i + 1 < n ) {
                        if(map[i+1][j] == '*' )bomb_num++;
                    }

                    if(j + 1 < m) {
                        if(map[i][j+1] == '*' )bomb_num++;
                    }
                    if( i - 1 >= 0 && j + 1 < m){
                        if(map[i-1][j+1] == '*' )bomb_num++;
                    } 
                    if( i + 1 < n && j - 1 >= 0) {
                        if(map[i+1][j-1] == '*' )bomb_num++;
                    }
                    map[i][j]=block_num[bomb_num];
                }

                
            }
        }

        cout << "Field #" << field++ <<":"<<endl;
        for(int i = 0;i < n ;i++){
            cout << map[i] <<endl;
        }
        cout<<"\n";
    }
}