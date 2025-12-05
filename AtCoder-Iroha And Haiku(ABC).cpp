#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int>n = {a,b,c};
    sort(n.begin(),n.end());
    if(n[0]==5&&n[1]==5&&n[2]==7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
