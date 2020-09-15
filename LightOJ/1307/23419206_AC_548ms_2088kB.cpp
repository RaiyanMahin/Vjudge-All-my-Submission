#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {


    int n; cin>>n;
        vector<int> a;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll cnt = 0LL;
        for(int i = 0;i<n;i++) for(int j = i+1;j<n-1;j++)
        {
            int ind = upper_bound(a.begin(), a.end(), a[i]+a[j]-1) - a.begin()-1;
            cnt+= ind - j;
        }
        printf("Case %d: %d\n",i,cnt);
        a.clear();
    }

}

