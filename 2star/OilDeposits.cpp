#include <iostream>
#include <vector>
using namespace std;
int m,n;
void find_deposit(vector<vector<bool>> &visited ,const int i,const int j,const vector<string> block){
    if(i < 0 || i >= m || j < 0 || j >= n ||visited[i][j]) return;
    visited[i][j] = true;
    if(block[i][j] == '@' ){ 
        find_deposit(visited,i-1,j-1,block);
        find_deposit(visited,i-1,j,block);
        find_deposit(visited,i-1,j+1,block);
        find_deposit(visited,i,j-1,block);
        find_deposit(visited,i,j+1,block);
        find_deposit(visited,i+1,j-1,block);
        find_deposit(visited,i+1,j,block);
        find_deposit(visited,i+1,j+1,block);
    }
    return;
}

int main(){
    while(cin >> m >> n && m != 0 && n != 0){
        cin.ignore();

        if(m == 0 || n == 0){cout << "m,n cannot smaller than 1"<<endl;break;}

        vector<string> block(m);
        string line;
        for(int i = 0 ; i < m ; i++){
            getline(cin,line);
            if(line.size()!=n){cout << "error line input"<<endl;break;}
            block[i] = line;
        }



        vector<vector<bool>> visited(m,vector<bool>(n,false));
        int deposit = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(!visited[i][j] && block[i][j] == '@'){
                    find_deposit(visited,i,j,block);
                    deposit++;
                }
            }
        }

        cout << deposit <<endl;
    }
}