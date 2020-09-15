//RAIYAN_MAHIN
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;
int main()
{
    FIO;
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll a,b,c; cin>>a; b=a;
        if(a%2!=0)
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Impossible"<<endl;
        }
        if(a%2==0)
        {
            while(b%2==0)
            {
                b/=2;
                if(b%2!=0) break;

            }
            c = a/b;
            cout<<"Case"<<" "<<i<<":"<<" "<<b<<" "<<c<<endl;
        }
    }
}
