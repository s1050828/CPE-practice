#include <iostream>
using namespace std;
int count(int num){
    int b=0;
    while(num!=0){
        if(num%2==1) b++;
        num/=2;
    }
    return b;
}


int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T ;i++){
        int N;
        cin >> N;
        int b1 = count(N);

        int X2=0,hex = 1;
        while(N!=0){
            X2+=(N%10)*hex;
            N/=10;
            hex*=16;
        }
        int b2 = count(X2);
        

        cout<<b1<<" "<<b2<<endl; 

    }
}