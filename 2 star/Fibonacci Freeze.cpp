#include <iostream>
#include <algorithm>
using namespace std;
string Add(string a,string b){
    string c;
    int add = 0;
    for(int i = 1 ; i <= b.size();i++){
        int addiction;
        if(i > a.size()) addiction = b[b.size() - i] + add - 48;
        else addiction = add + a[a.size() - i] + b[b.size() - i] - 96;
        if(addiction > 9){
            
            c.push_back(addiction - 10 + '0');
            add = 1;
        }
        else {
            c.push_back(addiction+'0');
            add = 0;
        }
    }
    if(add == 1) c.push_back('1');
    reverse(c.begin(), c.end());
    return c;

}
int main(){
    int n;
    while (cin >> n) {
        string f0 ="0",f1 ="1",f;
        for (int i = 0 ;i < n - 1; i++ ){
            f = Add(f0 , f1);
            f0 = f1;
            f1 = f;
        }

        if (n == 0) f = "0";
        else if(n == 1) f = "1";
        cout << "The Fibonacci number for "<<n<<" is "<<f<<endl;
    }
    
}