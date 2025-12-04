#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int c0=0,c1=0;
        for(int i=0; i<s.length(); i++)
        {
 
            if(s[i]=='0')c0++;
            else c1++;
        }
 
        int d=abs(c0-c1)/2;
        if(k<d)cout<<"NO\n";
        else if((k-d)%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
 
    return 0;
}
