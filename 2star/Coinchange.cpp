#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;

    vector<int> method(7490,0);
    method[0] = 1;
    for (int i = 1 ; i < 7490 ; i++ ){
        if(i >= 1 && i < 5) method[i] = method[i-1];
        else if(i >= 5 && i < 10) method[i] = max(method[i-1] + method[i-5]);
        else if(i >= 10 && i < 25) method[i] = method[i-1] + method[i-5] +method[i - 10];
        else if(i >= 25 && i < 50) 
            method[i] = method[i-1] + method[i-5] +method[i - 10] + method[i - 25];
        else
            method[i] = method[i-1] + method[i-5] +method[i - 10] + method[i - 25] + method[i - 50];
    }

    while(cin >> n) {
        cout <<method[n] << endl;
    }
}