#include <iostream>
using namespace std;
int main(){
    int input1,input2;
    
    while (cin >> input1 >> input2){
        if(input1==0 && input2 == 0) break;
        int p = 10,carry = 0,operation = 0;

        while(input1!=0 || input2!=0){
            int op1 = input1%p;int op2 = input2%p;
            input1/=p;input2/=p;

            if(op1+op2+carry>=10){
                operation++;
                carry=1;
            }
            else carry = 0;
        }
        
        if(operation>1) cout<<operation<<" carry operations."<<endl;
        else if(operation==1) cout <<"1 carry operation."<<endl;
        else cout <<"No carry operation."<<endl;
        
    }
    
}