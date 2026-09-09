#include <iostream>
using namespace std;
int main(){
    int i,j;
    while(cin>>i>>j){
        bool swap = false;
        if(i>j) {
            int temp = i;
            i = j;
            j = temp;
            swap = true;
        }
        int max_length = 0;
        for(int cycle = i; cycle <= j; cycle++ ){
            int k = cycle;
            int length=1;
            while(k!=1){
                if(k%2==1) k = 3*k+1;
                else k = k/2;
                length ++;
            }
            if( length>max_length) max_length= length;
        }
        if (swap){
            int temp = i;
            i = j;
            j = temp;
        }
        cout << i <<" "<< j <<" "<< max_length<<endl;
    }
    
    return 0;
}