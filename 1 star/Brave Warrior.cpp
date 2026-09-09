#include <iostream>
using namespace std;
int main(){
    long long int self,army;
    while(cin >> self >>army){
        long long int sub = army - self ;
        if (sub<0) sub = -sub;
        cout << sub << endl;
    }
    
}