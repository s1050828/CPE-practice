#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long roundUpEven(long long k) {
    return k + (k % 2);
}

int main(){
    int M,N;
    while(cin >> M >> N && M!=0 || N!=0){
        if(M == 0 || N == 0) cout <<"M or N = 0"<<endl;
        int knight_num;
        int mini = min(M, N);
        int maxi = max(M, N);
        if(mini == 1)  knight_num = maxi;
        else if(mini == 2) {
            int  k1 = (maxi + 1) / 2;      // 奇數欄的數量 (ceil(n/2))
            int  k2 =  maxi / 2;            // 偶數欄的數量 (floor(n/2))
            knight_num = roundUpEven(k1) + roundUpEven(k2);
        }
        else{
            knight_num = (M*N+1)/2;
        }
        
        

        cout << knight_num<<" knights may be placed on a "<<M<<" row "<<N<<" column board."<<endl;
    }
}