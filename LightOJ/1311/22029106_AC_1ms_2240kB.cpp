 //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    int main()
    {
        FIO;
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
            double u1,u2,v,a1,a2,s1,s2,t1,t2,t; cin>>u1>>u2>>v>>a1>>a2;
            s1=(u1*u1/(2*a1)); s2=(u2*u2/(2*a2));
            //cout<<s1<<" "<<s2<<" "<<s1+s2<<" ";
            t1=u1/a1; t2=u2/a2;
            t=(t1>t2)?t1:t2;
            printf("Case %d: %lf %lf\n",i,s2+s1,v*t);
        }
    }