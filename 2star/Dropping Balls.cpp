#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int D;
        long long I;
        scanf("%d %lld",&D,&I);

        long long pos = 1;   
        long long rank = I;  

        for (int d = 1; d < D; d++){
            if (rank % 2 == 1){       // 奇數 -> 走左邊
                pos = pos * 2;
                rank = (rank + 1) / 2;
            } else {                  // 偶數 -> 走右邊
                pos = pos * 2 + 1;
                rank = rank / 2;
            }
        }
        printf("%d\n",pos);
    }
}