#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int x;
    cin >> x;

    int l = 0, r = n - 1, ans = -1;

     while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            ans = mid;
            break;
        }
        else if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }

    cout << ans << endl;
    return 0;


}
