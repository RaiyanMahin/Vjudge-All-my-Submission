/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long LL;
//const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    int n,m,cnt=0; cin>>n>>m; int a[n],b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int j=0 ;j<m;j++){
        cin>>b[j];
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(b[j]>=a[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    //cout<<cnt<<endl;
    //cnt=0;


}
