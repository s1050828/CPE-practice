#include <iostream>
using namespace std;

int digitValue(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    return c - 'a' + 36;
}

int main(){
    string R;
    while(cin >> R){
        int maxDigit = 0,sum = 0;
        for (char c : R){
            int v = digitValue(c);
            maxDigit = max(maxDigit, v);
            sum += v;
        }
        int lo = max(2, maxDigit + 1);
        int ans = -1;
        for (int N = lo; N <= 62; N++) {
            if (sum % (N - 1) == 0) { ans = N; break; }
        }
        if (ans == -1) cout << "such number is impossible!" << endl;
        else cout << ans << endl;
    }
}