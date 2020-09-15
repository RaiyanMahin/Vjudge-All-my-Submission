/// #RM
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
using L = long long int;

ll phi[5000005];
int mark[5000005];
void sievePhi()
{
    for(int i=2; i<=5000005; i++) phi[i] = i;
    for(int i=2; i<=5000005; i++)
        if(!mark[i])
            for(int j=i; j<=5000005; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
    for(L i=3; i<5000005; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }

}
int main()
{
    sievePhi();
    int t;
    ll ans,a,b; scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%llu%llu", &a,&b);
        ans = phi[b] - phi[a - 1];
        printf("Case %d: %llu\n",i ,ans);
    }
    return 0;


}
