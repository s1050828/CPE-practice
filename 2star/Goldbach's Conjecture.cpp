#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n , n_upper = pow(2,15);
    vector <bool> primelist(n_upper + 1,false) ;
    for (int i = 2; i <= n_upper ; i ++){
        int upper = sqrt(i);
        bool prime = true;
        for (int j = 2 ; j <= upper; j ++){
            if(i % j == 0) {prime = false ;break;}
        }
        if(prime) primelist[i] = true;
        
    }

    while(cin >> n && n != 0){
        int mid = n/2 , combination = 0;
        for (int i = 2; i <= mid; i ++){
            if(primelist[i]&&primelist[n-i]) combination++;
        }
        cout <<combination << endl;
    }
}