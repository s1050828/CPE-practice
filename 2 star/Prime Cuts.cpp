#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool prime(const int num){
    int upper = sqrt(num) + 1;
    for (int i = 2 ;i < upper ; i ++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int N,C;
    vector <int> primelist;
    while(cin >> N >>C){
        primelist.push_back(1);
        for (int i = 2; i <= N ;i ++){
            if(prime(i)) primelist.push_back(i);
        }

        int range,start;
        if(primelist.size() % 2 == 0) {
            range = 2*C;
            start = primelist.size()/2 - C;
        }
        else {
            range = 2*C-1;
            start = primelist.size()/2 - C  + 1;
        }

        cout << N <<" "<< C <<":";
        if(range >= primelist.size()){
            for (int i = 0 ;i < primelist.size();i++){
                cout << " "<<primelist[i];
            }
        }
        
        else{
            for (int i = start ; i < start + range ; i++){
                cout << " "<<primelist[i];
            }
        }
        

        cout << endl <<endl;
        primelist.clear();
    }
}
