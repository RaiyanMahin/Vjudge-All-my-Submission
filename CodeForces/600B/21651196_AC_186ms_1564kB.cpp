/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
#define PI acos(-1)
using namespace std;
int main()
{
    FIO;
    int n,m; cin>>n>>m; int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0;j<m;j++){
        cin>>b[j];
        }
    for(int j=0;j<m;j++){
        cout<<upper_bound(a,a+n,b[j])-a<<" ";
    }



}

