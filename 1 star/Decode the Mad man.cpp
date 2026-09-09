#include <iostream>
using namespace std;

int main(){
    char ch;
    string list = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(cin.get(ch)){
        if(ch == ' ' || ch =='\n') cout << ch;
        else{
            int i ;
            for (i = 0 ; i< list.size();i++){
                if(list[i] == ch ) break;
            }

            cout << list[i-2];
        }
    }
}