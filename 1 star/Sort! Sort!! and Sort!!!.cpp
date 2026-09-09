#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(pair<int,int> &a,pair<int,int> &b) {
            pair<int,int> tmp;
            tmp = a;
            a = b ;
            b = tmp; 
}

int main(){
    int N,M; 
    while(cin >> N >> M){
        if(N == 0 && M == 0) {cout << N << " " << M << endl; break;}
        vector <pair<int,int>> list;
        cout << N << " " <<M <<endl;

        for (int j = 0; j<N;j++){
            int first,second;
            cin >> second;
            first = second % M;
            list.push_back({first,second}); 
        }

        
        

        int mod = 0;
        for (int j = 0; j < N; j++ ){
            for(int k = 0 ; k < N - j - 1 ;k++){
                if(list[k].first > list[k+1].first) swap(list[k],list[k+1]);
                else if(list[k].first == list[k+1].first){
                    if(list[k].second%2 == 0 && list[k+1].second%2 == 1) swap(list[k],list[k+1]);
                    else if(list[k].second%2 == 0 && list[k+1].second%2 == 0&&list[k].second > list[k+1].second) swap(list[k],list[k+1]);
                    else if(list[k].second%2 == 1 && list[k+1].second%2 == 1&&list[k].second < list[k+1].second) swap(list[k],list[k+1]);  
                }
            }
        }

        for (int j = 0; j<N;j++){
            cout << list[j].second << endl; 
        }

        
    }
}