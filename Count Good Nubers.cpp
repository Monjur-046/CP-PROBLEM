#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long power(long long a, long long b)
{
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    long long n;
    cin >> n;

    long long even = (n + 1) / 2;
    long long odd = n / 2;

    long long ans = (power(5, even) * power(4, odd)) % MOD;

    cout << ans << endl;

    return 0;
}
