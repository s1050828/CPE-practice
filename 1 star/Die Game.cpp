#include <iostream>

using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;

        int top = 1 , north = 2,east = 4,west = 3,south = 5;

        for (int i = 0;i < n;i++){
            string command;
            cin >> command;
            if(command == "north") {north = top ; top = south ;south = 7-north;}
            else if(command == "south") {south = top ;top = north;north = 7-south;}
            else if(command == "east"){east = top;top = west;west = 7-east;}
            else{west = top; top = east ; east = 7 - west;}

        }
           
        cout << top <<endl;


    }
}