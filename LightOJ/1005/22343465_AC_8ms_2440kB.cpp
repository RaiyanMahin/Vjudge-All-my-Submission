 #include<bits/stdc++.h>
    #define FiO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

    //using ll = long long;
    typedef long long int ll;

    using namespace std;

ll ct=0,t,n,k;
ll dp[50][910];
ll tydp(ll b, ll r){
    if(r ==0) return dp[b][r] = 1;
    if(b < r) return 0;
    if(dp[b][r]!=-1)return dp[b][r];
    dp[b] [r] = ((b*b)*tydp(b - 1,r -1))/r;

    return dp[b][r];
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&t);
    while(t--){
        ct++;
        memset(dp , -1,sizeof dp);
        ll i,j;
        scanf("%lld %lld",&n,&k);
        printf("Case %lld: %lld\n",ct,tydp(n,k));
    }
}
