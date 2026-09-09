#include <iostream>
using namespace std;
int main(){
    string N;
    while(getline(cin,N) && N!="0" ){
        while(N.size() > 1){
            int sum = 0;
            for (int i = 0; i < N.size() ; i++){
                sum += N[i] - '0';
            }
            N  = to_string(sum);
        }
        cout << N << endl;
    }
}