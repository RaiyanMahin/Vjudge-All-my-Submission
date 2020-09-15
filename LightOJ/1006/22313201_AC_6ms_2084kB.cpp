     //RAIYAN_MAHIN
        #include<bits/stdc++.h>
        using namespace std;
        typedef long long  ll;
        #define PI acos(-1)
        ll a, b, c, d, e, f;
     
     
    int main() {
        ll n, caseno = 0, cases,fn[10010];
     
        cin>>cases;
        while( cases-- ) {
            cin>>fn[0]>>fn[1]>>fn[2]>>fn[3]>>fn[4]>>fn[5]>>n;
            for(ll i=6;i<=n;i++)
            {
                fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6]) % 10000007;
            }
            cout<<"Case"<<" "<<++caseno<<": "<<fn[n] % 10000007<<endl;
        }
        return 0;
    }
     
