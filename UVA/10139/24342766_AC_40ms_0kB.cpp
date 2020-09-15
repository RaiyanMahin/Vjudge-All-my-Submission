/// #RM
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(int n, int pr, int cnt)
{
    ll prv = pr;
    while(n / prv && cnt > 0)
    {
        cnt -= n / prv;
        prv *= pr;
    }
    return cnt <= 0;
}
int main()
{
    int n,m, tmp, cnt = 0; bool isDiv;
    while( scanf("%d%d",&n, &m) == 2 )
    {
        tmp = m; isDiv = true;
        for(int i = 2; i * i <= m && isDiv; i++)
        {
            cnt = 0;
            while(m % i == 0)
            {
                m /= i;
                cnt++;
            }
            if(cnt > 0)
            {
                isDiv = check(n,i, cnt);

            }
        }
        if(m > 1  && isDiv)
        {
            isDiv = check(n,m,1);
        }
        printf("%d %s %d!\n", tmp, isDiv ? "divides" : "does not divide" , n );
    }
}
