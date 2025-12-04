#include <bits/stdc++.h>
using namespace std; 
int main() {
    string s;
    cin >> s;
    int b;
    cin >> b;
 
    for(int i = 0; i < b; i++) {
        if (!s.empty() && s.back() == '0') {
            s.pop_back();
        } else if (!s.empty()) {
            s.back() = s.back() - 1;
        }
    }
    cout << s << endl;
    return 0;
}
