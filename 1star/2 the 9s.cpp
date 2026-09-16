#include <iostream>
using namespace std;
int main(){
    while(1){
        string N={};
        getline(cin,N);
        if(N == "0") break;

        int degree=0;
        cout << N;
        while(N.size()>1){
            int Num=0;
            for (int i = 0; i < N.size();i++){
                Num += int(N[i]) - '0';
            }
            
            degree ++;
            N = to_string(Num);
            
        }
        if(N != "9") cout <<" is not a multiple of 9."<<endl;
        else {
            if(degree == 0) degree ++;
            cout << " is a multiple of 9 and has 9-degree "<<degree <<"."<<endl;
        }
    }
    return 0;
}