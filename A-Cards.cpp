#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<pair<int,int> > cu(x);
    for(int i=0;i<x;i++)
    {
        int y;
        cin >> y;
        cu[i] =  {y,i+1};
    }
    sort(cu.begin(),cu.end());
    for(int i=0;i<x/2;++i)
    {
        cout << cu[i].second << " "  << cu[x-1-i].second << endl;
    }
    return 0;
}
