#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int list[3000];
        for(int i = 0; i<n ;i++){
            cin>>list[i];
        }

        bool seen[3000] = {false}; // seen[k] 表示差值 k 是否出現過
        bool jolly = true;
        for (int i = 0; i < n - 1; i++){
            int diff = list[i] - list[i+1];
            if (diff < 0) diff = -diff;
            if (diff < 1 || diff > n - 1 || seen[diff]){
                jolly = false;
            } 
            else seen[diff] = true;
        }
        if(jolly) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
}