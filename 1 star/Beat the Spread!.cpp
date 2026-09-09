#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0;i < n ; i++ ){
        int s,d;

        cin >> s >> d;
        int a1 = (s + d) / 2;
        int a2 = s - a1;
        if (a1 + a2 == s && a1 >= 0 && a2 >= 0 && a1 - a2 == d){
            cout << a1 << " "<< a2 <<endl ;
        }
        else cout << "impossible" << endl;
    }
}