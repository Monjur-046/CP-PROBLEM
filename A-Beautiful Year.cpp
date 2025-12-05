#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,z,w,q;
   cin >> x;
   for(;;)
   {
       x++;
       y=x/1000;
       z=(x/100)%10;
       w=(x/10)%10;
       q=x%10;
       if(y!=z&&y!=w&&y!=q&&z!=w&&z!=q&&w!=q)
       {
           break;
       }
   }
   cout << x;
   return 0;
}
