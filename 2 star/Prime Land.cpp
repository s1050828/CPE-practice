#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    string line;
    while(getline(cin,line) && line != "0"){
        
        vector<int> intlist;
        string tmp = "";
        for(int i = 0;i < line.size(); i++){
            if(line[i] == ' ') {
                intlist.push_back(stoi(tmp));
                tmp.clear();
            }
            else tmp.push_back(line[i]);

            if(i == line.size()-1) intlist.push_back(stoi(tmp));
        }
        
        int X = 1;
        for(int i = 0 ; i < intlist.size() - 1 ; i+=2){
            int base = intlist[i],exp = intlist[i+1];
            X *= pow(base,exp);
        }
        X--;


        int upper = sqrt(X) , prime = 2;
        vector<pair<int,int>> output ;
        while(prime <= upper && X != 1){
            if(X % prime == 0) {
                if(!output.empty() && output[output.size()-1].first == prime) output[output.size()-1].second++; 
                else output.push_back({prime,1});
                X/=prime;
            }
            else prime ++;    
        }
        if(X!=1){
            if(!output.empty() && output[output.size()-1].first == X) output[output.size()-1].second++; 
            else output.push_back({X,1});
        }

        for (int i = output.size() - 1 ; i >= 0 ; i-- ){
            cout << output[i].first << " " << output[i].second;
            if(i == 0) cout <<endl;
            else cout << " ";
        }
        intlist.clear();
    }
}
