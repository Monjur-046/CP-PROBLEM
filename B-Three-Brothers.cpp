#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,m=0;
    cin >> k >> n >> w ;
    for(int i=0;i<=w;++i){
        m = m+(i*k);
    }
    if(m<=n)
    {
        cout << 0 <<endl;
    }
    else
    {
        cout << m-n << endl;
    }
    return 0;
 
}
