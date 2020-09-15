
#include<bits/stdc++.h>
#include<iterator>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
typedef long long int ll;
int main()
{
    int t;cin>>t;
    int j=0;
    while(t--)
    {
        int n;cin>>n;
        int m=0;
        int c;
        while(n--)
        {
            cin>>c;
            m=max(c,m);
        }
        printf("Case %d: %d\n",++j,m);
    }




}
