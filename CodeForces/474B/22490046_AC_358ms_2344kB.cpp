/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
    ll n,i,j,s=0,m; cin>>n; ll a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i] ; s+=a[i]; b[i]=s;
    }
    cin>>m; ll d[m];
    for(j=0;j<m;j++){
        cin>>d[j];
    }
    for(i=0;i<m;i+=1){
        cout<<lower_bound(b,b+n,d[i])-b+1<<endl;
    }
   
}