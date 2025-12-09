#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    if (n == 0) {
        cout << "" << endl;
        return 0;
    }

    string prefix = s[0];
    for (int i = 1; i < n; i++) {
        while (s[i].find(prefix) != 0) {
            prefix.pop_back();
            if (prefix == "") break;
        }
    }

    cout << prefix << endl;

    return 0;
}
