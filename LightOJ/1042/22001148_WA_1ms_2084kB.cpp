    //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef unsigned int ui;
    #define PI acos(-1)
    ll gt(ll x)
    {
        ll c=x,c0=0,c1=0;
        while(((c & 1)==0) && (c!=0))
        {
            c0++; c >>=1;
        }
        while((c&1)==1)
        {
            c1++; c>>=1;
        }
        if(c0 + c1==31 || c0+c1==0){
            return -1;
        }
        ll p= c0+c1;
        x |=(1<<p);
        x &= ~((1<<p)-1);
        x |=(1<<(c1-1))-1;
        return x;


    }
    int main()
    {
            int t; cin>>t;
            for(int i=1;i<=t;i++){

             ll x; cin>>x;
               cout << "Case"<<" "<<i<<":"<<gt(x)<<endl;



        }
    }


