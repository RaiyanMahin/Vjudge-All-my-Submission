    //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define PI acos(-1)
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++){
            int n,m,o=0,g; cin>>n; m=n;
            while(n!=0)
             {
                 g=n%10;  o=o*10+g;  n/=10;
             }
             if(o==m)
                printf("Case %d: Yes\n",i);
             else
                printf("Case %d: No\n",i);

             }
    }
