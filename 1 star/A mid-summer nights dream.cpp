#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int mid1 = v[(n - 1) / 2]; 
        int mid2 = v[n / 2];       

        int count = 0;
        for (int x : v) {
            if (x >= mid1 && x <= mid2) count++;
        }

        cout << mid1 << " " << count << " " << (mid2 - mid1 + 1) << "\n";
    }
    return 0;
}