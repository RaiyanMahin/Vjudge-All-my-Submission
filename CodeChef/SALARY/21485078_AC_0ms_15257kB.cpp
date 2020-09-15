/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;
int main()
{
    FIO;
    int t; cin>>t;
    for(int j=1;j<=t;j++){
        long long int n,s=0,a,mn=1000009;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a; s+=a;
            if(a<mn){
                mn=a;
            }
        }
        cout<<(s-n*mn)<<endl;
    }
}