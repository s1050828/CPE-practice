#include <iostream>
using namespace std;
int main(){
    long long B, P, M;
    while (cin >> B >> P >> M) {
        long long result = 1 % M;
        long long base = B % M;
        long long exp = P;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % M;
            base = (base * base) % M;
            exp >>= 1;
        }
        cout << result << "\n";
    }
}