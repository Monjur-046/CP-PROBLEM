#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   string s;
   cin>>s;
   int cnt1=0;
   int cnt2=0;
   for(int i=0;i<s.length();i++){
         if(s[i]>='A'&&s[i]<='Z'){
            cnt1++;
         }else cnt2++;
   }
   if(cnt1<=cnt2){
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }
    }
    else{
        for(int i=0;i<s.length();i++)
        {
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
        }
   }
   cout<<s<<endl;
 
   return 0;
}
