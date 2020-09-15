
#include<bits/stdc++.h>
#include<iterator>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define M 7
using namespace std;
typedef unsigned long long int ll;
ll bigmod(ll n, ll k)
{
    if(k == 0) return 1;
    ll re = bigmod(n,k/2);
    re = (re * re) ;
    if(k % 2) re  = (re * n);
    //cout<<re<<endl;
    return re;
}
int main()
{
    ll a,b,sum=0;
    while(cin >> a >> b)
    {
        for(ll i = 1; i <= b; i++)
        {
            sum  += i*bigmod(a,i);

        }
        cout<<sum<<endl;
        sum   = 0;

    }





}
