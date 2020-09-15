#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<ll,ll>m;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n + 10];
        int cnt = 0;
        double m; cin >> m;
        double x=ceil(n*m);
        //cout<<x<<endl;
        for(int i  = 1; i <= n ;i++)
        {
            cin >> a[i];
            if(a[i] >= 50)
                cnt++;
        }
        if(cnt>=x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
