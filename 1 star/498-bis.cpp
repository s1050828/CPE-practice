#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        cin.ignore();
        string input={};
        vector <int> list;
        
        //cin
        getline(cin,input);
        
        int i = 0;string s={};
        while(input[i] != '\n' && i < input.size() ){
            if(input[i] == ' ') {
                list.push_back(stoi(s));
                s = {};
            }
            else {
                s.push_back(input[i]);
            }   
            i++;
        }
        
        int total = 0;
        for (i = 0 ; i < list.size()-1; i++){
            int ci = list[i]*(list.size()-i-1);
            int xi = pow(x,list.size()-i-2);
            total += ci*xi;
        }
        cout << total <<endl;


        list.clear();
    }
}