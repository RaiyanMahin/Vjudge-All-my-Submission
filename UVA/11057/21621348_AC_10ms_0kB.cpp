/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
    int n,cst;
    while(cin>>n){
        int a[n+5],d=0,o1,o2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>cst;
        sort(a,a+n);
        
        for(int i=0;i<n;i++){
            d=cst-a[i];
            d=lower_bound(a+i,a+n,d)-a;
            if(a[i]+a[d]==cst){
                o1=a[i]; o2=a[d];
            }
        }
        cout<<"Peter should buy books whose prices are "<<o1<<" and "<<o2<<".\n\n";
        
    }
   
}