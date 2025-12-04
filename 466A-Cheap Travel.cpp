#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(m*a > b){
        int r = (n%m) * a;
        if(r > b) cout << n/m * b + b << endl;
        else cout << n/m * b + r << endl;
            
    }
    else cout << n * a << endl;


    return 0;
}
