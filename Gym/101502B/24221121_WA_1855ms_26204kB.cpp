#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<int,int>m;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;scanf("%d",&n);
        int sum=0;
        int r[100001],c[100001];
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&r[i],&c[i]);
            m[r[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            sum+=m[c[i]];
        }
        cout<<sum<<endl;
    }
}
