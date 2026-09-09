#include <iostream>
using namespace std;

int main(){
    int n , m ,list;
    
    while(cin >> n >> m){
        int n_test = n;
        bool valid=true;

        while(n_test != 1){
            if( m == 0 || n==1 || n_test%m != 0){
                valid = false;
                break;
            }
            else n_test /= m;
        }

        if(valid){
            while(n != 1){
                cout<< n << " ";
                n /= m;
            }
            cout << "1"<< endl;
        }
        else cout << "Boring!"<< endl ;
    }
}