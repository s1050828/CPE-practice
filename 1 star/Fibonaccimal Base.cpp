#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int list[40];
    list[0]=1,list[1]=2;
    int p=2;

    while(list[p-1]<=100000000){
        list[p] = list[p-1] +list[p-2];
        p++;
    }

    for(int i = 0 ; i < N;i++){
        int input,point;
        
        cin >> input ;
        int output = input;

        while(input>=list[point]){
            point++;
        }
        cout<<output<<" = ";
        while(point!=0){
            point --;
            cout << input/list[point];
            input = input%list[point];
        }

        cout<< " (fib)" <<endl;
    }
}