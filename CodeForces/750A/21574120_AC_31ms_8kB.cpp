/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
//#define long long LL
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,w=0,t=0,cnt=0; cin>>n>>k;
    for(int i=1;i<=n;i++){
        cnt+=i*5;
        if(cnt+k>240) break;
        t=i;
    }
    cout<<t<<endl;
    return 0;
}