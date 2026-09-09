#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
bool prime(int num){
    bool P = true;
    int time = sqrt(num);
    for(int i = 2; i < time +1 ; i++){
        if(num%i == 0){
            P= false;
            break;
        }
        
    }
    return P;
}
int converse(int num){
    string N = to_string(num);
    reverse(N.begin(),N.end());
    num = stoi(N);
    return num;
}
int main(){
    int N;
    while(cin >> N){
        if(!prime(N)) cout << N <<" is not prime."<< endl;
        else if( N == converse(N) || !(prime(converse(N))) ) cout << N <<" is prime."<< endl;
        else  cout << N <<" is emirp."<< endl;
    }
}