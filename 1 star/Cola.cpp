#include <iostream>
using namespace std;
int main(){
    int cola;
    while(cin >> cola){
        int empty_cola = 0,total_drink = 0;
        while(empty_cola + cola >= 3){
            total_drink += cola;
            empty_cola += cola;
            cola = empty_cola / 3;
            empty_cola %= 3;
        }
        if(empty_cola + cola == 2) total_drink++;
        cout << total_drink + cola << endl;
    }
}