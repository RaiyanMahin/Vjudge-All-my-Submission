//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    #include<bitset>
    using namespace std;
    typedef long long int ll;
    typedef unsigned int ui;
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++){
            ll n,m; cin>>n>>m; ll a[n+10]={0};
            for(int j=0;j<n;j++)
            {
                cin>>a[j];
            }
            for (int k=1;k<=m;k++){
              char s; cin>>s;
              if(s=='P'){
                int A,B; cin>>A>>B;
                swap(a[A],a[B]);

              }
              if(s=='S'){
                    ll v; cin>>v;
                for(int j=0;j<n;j++){
                    a[j]=a[j]+v;
                }
              }
              if(s=='M'){
                ll q; cin>>q;
                  for(int j=0;j<n;j++){
                    a[j]=a[j]*q;
                }

              }
              if(s=='R'){
                reverse(a,a+n);
              }
              if(s=='D'){
                ll l; cin>>l;
                for(int j=0;j<n;j++){
                   
                        a[j]=a[j]/l;
                    
                }

              }
            }
            printf("Case %d:\n",i);
            for(int j=0;j<n;j++)
        {
            if(j!=0)
                printf(" ");
            printf("%lld",a[j]);
        }
        printf("\n");



        }
    }
