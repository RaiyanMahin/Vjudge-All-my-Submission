#include <bits/stdc++.h>

int main()
{
    long long int i,j,k,t,r,a1,a2,b1,b2,c1,c2,d1,d2;
   cin >> t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld %lld %lld",&a1,&a2,&b1,&b2,&c1,&c2);
        d1=a1+c1-b1;
        d2=a2+c2-b2;
        k=(a1*(c2-b2))-(a2*(c1-b1))+((c1*b2)-(b1*c2));
        if(k<0)
            k=k*-1;
        printf("Case %lld: %lld %lld %lld\n",i,d1,d2,k);
    }
    
}