#include <iostream>
using namespace std;
int main(){
    char input;
    int first = 1;
    while(cin.get(input)){
        if(input == '"'&&first==1) {
            first = 0 ;
            cout<<"``";
        }
        else if(input == '"'&&first==0)        {
            first = 1;
            cout <<"''";
        }
        else cout<<input;
    }
}