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
    int n; cin>>n; int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q; cin>>q; int b[q];
    for(int j=0;j<q;j++){
        cin>>b[j];
    }
    int cnt=0;
    for(int j=0;j<q;j++){
        for(int i=0;i<n;i++){
            if(b[j]>=a[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}