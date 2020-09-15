
//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef unsigned int ui;
    #define PI acos(-1)
    int main()
    {
        int t,test=1,n; cin>>t;
        vector<int>vi;
        for(int i=1;i<=t;i++){
            cin>>n;
            vi.clear();
            while(n>=2){
                vi.push_back(n%2); n/=2;
            }
            vi.push_back(n); vi.push_back(0);
            reverse(vi.begin(),vi.end());
            next_permutation(vi.begin(),vi.end());
            ll ans=0,pos=0;
            for(int j=vi.size()-1;j>=0;j--){
                if(vi[j]){
                    ans |= (1LL << pos);
                }
                pos++;
            }
            printf("Case %d: %lld\n",test++,ans);


                    }
    }
