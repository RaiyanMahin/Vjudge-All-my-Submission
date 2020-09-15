#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back
        #define PI acos(-1)
        int main()
        {
            float r,m,n,s,d;
            while(cin>>r>>m>>n)
            {
                if(r==0 && n==0 && m==0)
                {
                    return 0;
                }
                else {
                    s = PI*r*r;
                    d = (4*r*n*r)/(m);
                }
                cout << s << ' ' << d << '\n';
            }
        }
