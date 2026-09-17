#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;

    vector<long long int> method(7490,0);
    int coin[4]={5, 10, 25, 50};
    method[0] = 1;
    for (int i = 1 ; i < 7490 ; i++ ){
        method[i] = 1;
    }

    for (int j = 0 ; j < 4 ; j++ ){
        for(int i = 1 ; i < 7490 ; i++ ){
            if(i >= coin[j]) method[i] += method[i - coin[j]];
        }
    }

    while(cin >> n) {
        cout <<method[n] << endl;
    }
}