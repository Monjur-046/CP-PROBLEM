#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        reverse(x.begin(),x.end());
        for(int i=0;i<x.size();++i)
        {
            if(x[i]=='p') cout << "q" ;
            else if(x[i]=='q') cout << "p" ;
            else cout << "w" ;
 
        }
        cout << endl;
 
    }
    return 0;
}
