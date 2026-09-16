#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int main(){
    int t ,Scenario = 1;
    while(cin >> t && t!=0){
        cout <<"Scenario #"<<Scenario++<<endl;

        unordered_map<int,int> teamlist;
        for (int i = 0 ;i < t ; i ++){
            int n;
            cin >> n;
            for (int j = 0 ;j < n ; j ++){
                int in;
                cin >> in;
                teamlist[in] = i;
            }
        }

        string command;int element;
        queue<int> teamQueue;                    
        queue<int> memberQueue[1000];            
        
        while(cin >>command && command != "STOP"){
            
            if(command == "ENQUEUE"){
                cin >>element;
                int team = teamlist[element];
                if (memberQueue[team].empty()) {
                    teamQueue.push(team);
                }
                memberQueue[team].push(element);
            }
            else if(command == "DEQUEUE"){
                int team = teamQueue.front();
                int member = memberQueue[team].front();
                cout << member <<endl;
                memberQueue[team].pop();
                if(memberQueue[team].empty()) teamQueue.pop();
                
                
            } 
            else cout <<"Error!"<<endl;
        }

        
    }
}