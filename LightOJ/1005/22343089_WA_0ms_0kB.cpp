
/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;
int main()
{
    int t,j=0; cin>>t;
    for(int i=1;i<=t;i++){
        ll n,k; cin>>n>>k;
        ll ans =0;
        if(n*n>=k){
            ans = 1;
            for(int i=1;i<=k;i++){
                ans = ans*n*n/i;
                n-=1;
            }
        }
      printf("Case %d: %lld\n",++j,ans);

            }
}
