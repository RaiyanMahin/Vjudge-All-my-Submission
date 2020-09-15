/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
    int t; cin>>t;
    for(int i=0; i<t;i++){
        int n; cin>>n; 
        vector<int>a(n);
        int pos=-1;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]==1) pos=j;
        }
        bool cnt1=true, cnt2=true;
        for(int j=1;j<n;j++){
            cnt1 &=(a[(pos-j+n)%n]==j+1);
            cnt2 &=(a[(pos+j+n)%n]==j+1);
        }
        if( cnt1 || cnt2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        
       
    }
 
   





