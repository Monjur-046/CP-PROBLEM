#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    stack<char>st;
    int i=0;
    int cnt=0;
    while(s[i]!='\0'){
    if(s[i]=='('){
        st.push(s[i]);
       }else{
        st.pop();
       }if(st.empty()){
        cnt++;
        
       }i++;
    }
    if(cnt>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
 
}
