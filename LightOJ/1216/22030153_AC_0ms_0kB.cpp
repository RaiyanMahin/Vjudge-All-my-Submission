 //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    #define PI acos(-1)
    int main()
    {
        FIO;
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
            double r1,r2,h,p,R,V; cin>>r1>>r2>>h>>p;
            R=r2+(r1-r2)*(p/h);
            V= (1/3.0)*PI*(R*R+r2*r2+r2*R)*p;
            //cout<<"Case"<<" "<<i<<":"<<" "<<V<<endl;
            printf("Case %d: %0.9lf\n",i,V);
        }
    }
