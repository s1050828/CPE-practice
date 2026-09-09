#include <iostream>
using namespace std;
int main(){
    string input;
    while(getline(cin,input)){
        int list[500]={0};
        for (int i = 0 ; i < input.size(); i++){
            int loc = int(input[i]);
            list[loc]++;
        }
        while(1){
            int mintimes=1001;
            for (int i = 0 ; i < 500 ;i++){
                if(list[i]<mintimes && list[i] != 0) mintimes = list[i];
            }

            if(mintimes == 1001) {
                cout << "\n";
                break;
            }

            else{
                for (int i = 499 ; i >= 0 ;i--){
                    if(list[i] == mintimes) {
                        cout << i <<" " << list[i]<<endl;
                        list[i]=0;
                    }

                }
            }
        }
    }
}