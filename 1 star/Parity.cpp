#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int I;
    while(cin >> I && I!= 0){
        bitset<100> bit(I);
        
        int P = 0;
        P = bit.count();

        bool start = false;
        string str = bit.to_string(),substr= " ";
        for(int i = 0 ; i < 100;i++){
            if(start){
                substr.push_back(str[i]);
            }else if(str[i] == '1') {
                start = true;
                substr.push_back(str[i]);
            }
        }


        cout << "The parity of"<< substr <<" is "<< P <<" (mod 2)."<<endl;        
    }
}