#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int N;
    while(cin >> N && N!=0){
        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++) G+=gcd(i,j);
        }
        cout << G <<endl;
    }
}