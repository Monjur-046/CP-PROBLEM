#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
        {
            int a;
            cin >> a;
            int sum=0;
            for(int i=1;i<=a;++i){
                int x;
                cin >> x;
                if(i%2!=0)
                {
                    sum = sum + x ;
                }
                else
                {
                    sum = sum - x ;
                }
            }
                cout << sum << endl;
 
        }
        return 0;
}
