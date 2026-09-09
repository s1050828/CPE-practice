#include <iostream>
using namespace std;


long long getIndex(long long x, long long y) {
    long long line = x + y;
    return line * (line + 1) / 2 + x;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        long long path = getIndex(x2, y2) - getIndex(x1, y1);
        
        cout << "Case " << i + 1 << ": " << path << endl;
    }
    return 0;
}