#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    set<char> s1;
    for (char c : s) {
        s1.insert(c);
    }
 
 
    if (s1.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}
