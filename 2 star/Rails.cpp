#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    int N;
    while(cin >> N && N != 0){
        vector<int> T = {};
        stack<int> S = {}; 
        int t ;
        
        while(cin >> t && t != 0){
            T.push_back(t);
            for (int i = 1 ;i < N ;i ++){
                cin >> t;
                T.push_back(t);
            }
            
            int train = 1;
            bool B = true;
            int i = 0;
            while(i < N){
                
                if(!S.empty() && S.top() == T[i]) {
                    S.pop();
                    i++;   
                }
                else if(train > N) {
                    B = false ;
                    break;
                }
                else S.push(train++);
            }

            if(B) cout <<"Yes"<<endl;
            else cout <<"No"<<endl;

            T.clear();
            while (!S.empty())S.pop();
            
        }
        

        cout <<endl;
    }
}