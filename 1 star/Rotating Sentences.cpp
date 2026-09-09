#include <iostream>
using namespace std;
int main(){
    int i=0,j=0;
    char table[101][100]={0};
    char input;
    while(cin.get(input)){
        table[i+1][j]=input;
        if(input=='\n'){
            i++;
            j=0;
            table[i+1][j]='\0';
        }
        else j++;
    }
    for (int a = 0;a<100;a++){
        table[0][a]='\n';
    }
    for (int b=0;b<100;b++){
        for (int a=100;a>=0;a--){
            cout<<table[a][b];
        }
    }
}