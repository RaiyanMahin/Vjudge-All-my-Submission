    //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
            int n,s=0; cin>>n; int a[n];
            for(int j=0;j<n;j++)
            {
                cin>>a[j];
                if(a[j]>0) s+=a[j];
            }
            printf("Case %d: %d\n",i,s);
            s=0;
        }
    }