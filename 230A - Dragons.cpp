#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fibo(int n){
    if(n <= 1) return n;
    else
    return fibo(n-1) + fibo(n-2);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll s, n; cin >> s >> n;
    bool flag = true;
    vector<pair<ll, ll>> a;
    
    for(int i=0; i<n; i++){
        ll x, y; cin >> x >> y;
        a.push_back({x, y});
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if(a[i].first < s){
            s += a[i].second;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
