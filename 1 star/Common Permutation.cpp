#include <iostream>
#include <algorithm>
using namespace std;
string Substr(string s1,string s2){
    string longest_str = "";
    int i = 0,j = 0;
    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[j]){
            longest_str.push_back(s1[i]);
            i++;j++;
        }
        else if(s1[i] > s2[j]) j++;
        else i++;
        
    }
    return longest_str;
}


int main(){
    string a,b;
    while(cin >> a >> b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        string substr = Substr(a,b);
        cout << substr <<endl;
    }
}