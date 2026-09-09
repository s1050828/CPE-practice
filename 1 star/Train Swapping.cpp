#include <iostream>
using namespace std;
void Swap(int a,int b){
    int temp = a;
    a= b;
    b= temp;
}
int main(){
    int N,L;

    cin>>N;
    
    for (int i = 0 ; i < N ; i++){
        int swap = 0;
        cin >> L;
        int train[L];
        for (int j = 0 ;j < L ;j++){
            cin >> train[j];
        }
        for(int j = 0 ;j<L-1;j++){
            for(int k = 0 ;k<L-1-j;k++){
                if(train[k]>train[k+1]){
                    int temp = train[k];
                    train[k]= train[k+1];
                    train[k+1]= temp;
                    swap++;
                }
            }
        }
        cout <<"Optimal train swapping takes "<<swap<<" swaps."<<endl;
    }
}