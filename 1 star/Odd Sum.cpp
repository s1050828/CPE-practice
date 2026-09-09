#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for (int i = 0;i < T ; i++){
        int a,b;
        cin >> a >> b;
        if(a%2 == 0) a++;
        if(b%2 == 0) b--;
        int ans = (a+b)*(b-a+2)/4;
        cout << "Case "<<i+1<<": "<<ans <<endl;
    }

}