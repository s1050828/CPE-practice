#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b && !(a==0 && b==0)){
        int total = 0,start = sqrt(a) ,end = sqrt(b) + 1 ;
        while(start <= end){
            if(start * start >= a && start * start <= b) total ++;
            start ++;
        }

        cout << total <<endl;
    }
}
