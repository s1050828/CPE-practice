#include <iostream>
#include <string>
#include <vector>
using namespace std;
void mul(const vector<int> &I,long long m){

}

int main(){
    string line;
    while(getline(cin,line)){
        if(line.size()>9){
            cout << "Invalid Input the input size = " << line.size()<<endl;
            return 1;
        }
        string R = line.substr(0,6);
        int n = stoi(line.substr(7,2));
        size_t dot =R.find('.');
        if(dot == string::npos) dot = -1;
        else R.erase(dot, 1);

        long long m = stoll(R);

        vector<int> output = {1};
        for (int i = 0 ; i < n ; i ++) mul(output,m);
        
        int times = output.size();
        for  (int i = 0 ; i < times; i ++) {
            if(i == dot){ cout <<'.'; times++;}
            else cout << output[i];
        }
    }
}