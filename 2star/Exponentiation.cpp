#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void mul(vector<int> &I,long long m){
    long long int carry = 0;
    for (auto &i : I){
        long long cur = i * m + carry;
        i = cur % 10;
        carry = cur / 10;
    }
    while(carry){
        I.push_back(carry%10);
        carry/=10;
    }
}

int main(){
    string line;
    while(getline(cin,line) && line!=""){
        if(line.size()>10){
            cout << "Invalid Input the input size = " << line.size()<<endl;
            return 1;
        }
        string R = line.substr(0, 6);
        int n = stoi(line.substr(7));
        R.erase(remove(R.begin(), R.end(), ' '), R.end());   

        int dec = 0;                                        
        size_t dot = R.find('.');
        if (dot != string::npos){
            dec = R.size() - dot - 1;
            R.erase(dot, 1);
        }
        long long m = stoll(R);
        while (dec > 0 && m % 10 == 0){ m /= 10; dec--; }    

        vector<int> output = {1};
        for (int i = 0; i < n; i++) mul(output, m);
        reverse(output.begin(), output.end());

        string s;
        for (int d : output) s += char('0' + d);
        int total = dec * n;                                  // 結果的小數位
        if (total > 0){
            if ((int)s.size() < total) s = string(total - s.size(), '0') + s; 
            s.insert(s.size() - total, ".");
        }
        cout << s << "\n";
    }
}