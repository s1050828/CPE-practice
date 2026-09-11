#include <iostream>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;
int main(){
    int N;
    cin >>N;
    for(int i = 0;i < N ;i++){
        int L,U;
        cin >> L >> U;

        int maxP = L,maxD = 1;
        vector<pair<int,int>> factor={};
        for(int j = L; j <= U ;j++){
            factor.clear();
            int f = 2,P = j,D = 1,p = j;
            while(f <= int(sqrt(P)) + 1 && p != 1){
                if(p % f == 0){
                    p/=f;
                    if(!factor.empty()&&factor[factor.size()-1].first == f) factor[factor.size()-1].second++;
                    else factor.push_back({f,1});
                }
                else f++;
            }

            if(!factor.empty()) {
                for(int k = 0 ;k<factor.size(); k++){
                    D *= factor[k].second + 1;
                }
            }

            if(D > maxD){
                maxP = P;
                maxD = D;
            }
        }
        cout <<"Between "<<L<<" and "<<U<<", "<<maxP<<" has a maximum of "<<maxD<<" divisors."<<endl;
    }
}