#include <iostream>
using namespace std;
int main(){
    long long int S,D;
    while(cin >> S >>D){
        long long int num = 0;
        while(num < D){
            num+=S;
            S++;
        }
        cout << S - 1<<endl;
    }
}