    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    ll k,c1=0,ans=0;
    ll dp[1000009];
    main()
    {
     
        dp[0]=1;
        cin>>k;
        string s;
        cin>>s;
        int sz=s.size();
        for(ll i=0;i<sz;i++)
        {
            if(s[i]=='1')c1++;
            if(c1>=k)ans=ans+dp[c1-k];
            dp[c1]++;
        }
        cout<<ans<<endl;
        return 0;
    }