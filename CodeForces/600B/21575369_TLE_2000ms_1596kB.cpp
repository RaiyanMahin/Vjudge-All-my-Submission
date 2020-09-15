/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    ll n,m,cnt=0; cin>>n>>m; ll a[n],b[m];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll j=0 ;j<m;j++){
        cin>>b[j];
    }
    for(ll j=0;j<m;j++){
        for(ll i=0;i<n;i++){
            if(b[j]>=a[i]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
        cnt=0;
    }
    //cout<<cnt<<endl;
    //cnt=0;


}
