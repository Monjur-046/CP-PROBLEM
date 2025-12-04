#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        int sum = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                sum += (a[i] - b[i]);
            }
        }
 
        cout << sum << endl;
    }
}
