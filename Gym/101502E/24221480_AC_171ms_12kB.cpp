#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<ll,ll>m;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int b=0,k=0,l=0;
        for(int i = 1; i <= n; i++)
        {
            //int b=0,k=0,l=0;
            string s; cin >> s;
            if(s[0] == 'b')
            {
                b++;
            }
            if(s[0] == 'l')
            {
                l++;
            }
            if(s[0] == 'k')
            {
                k++;
            }
        }
        if(b == 0 || k == 0 || l == 0)
        {
            cout << 0 << '\n';

        }
        else{
            b=b/2;
            int x=min(b,min(k,l));
            cout<<x<<endl;
        }
        b=0,k=0,l=0;

    }
}
