 //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long  ll;
    int main()
    {
        FIO;
        int n,g=0,c=1; cin>>n; int a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                ++c;
            }
            else {
                if(c>g) {
                    g=c; c=1;
                }
            }
        }
        if(c>g) g=c; cout<<((g<=(n+1)/2)?"YES":"NO")<<endl;
    }
