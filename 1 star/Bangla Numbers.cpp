#include <iostream>
using namespace std;
int main(){
    long long int input;
    int title = 1;
    while(cin >> input){
        int list[9]={0};

        list[0] = input/100000000000000;
        input%=100000000000000;

        list[1] = input/1000000000000;
        input%=1000000000000;

        list[2] = input/10000000000;
        input%=10000000000;

        list[3] = input/1000000000;
        input%=1000000000;

        list[4] = input/10000000;
        input%=10000000;

        list[5] = input/100000;
        input%=100000;

        list[6] = input/1000;
        input%=1000;

        list[7] = input/100;
        list[8]=input%100;

        bool iskuti = false;
        cout << title++ <<'.';
        for (int i = 0; i<9 ; i++){
            if(list[i]!=0){
                switch(i){
                    case 0:case 4:
                        cout << " "<< list[i] << " kuti";
                        iskuti=true;
                        break;
                    case 1:case 5:
                        cout << " "<< list[i] << " lakh";
                        iskuti=true;
                        break;
                    case 2:case 6:
                        cout << " "<< list[i] << " hajar";
                        iskuti=true;
                        break;  
                    case 3:case 7:
                        cout << " "<< list[i] << " shata";
                        iskuti=true; 
                        break; 
                    default:
                        if(list[8]!=0) cout << " "<<list[8] ;
                        iskuti=true;
                        break;  
                }
            }
            else if(iskuti && i == 4) cout << " kuti";
        }
        if(iskuti) cout << "\n";
        else cout <<" 0"<<endl;
    }
}