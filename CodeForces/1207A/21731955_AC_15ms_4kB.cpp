/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
        int t; cin>>t;
    for(int i=1; i<=t;i++){
        int b,p,f,h,c; cin>>b>>p>>f>>h>>c;
        b/=2;
        if(h<c){
            swap(h,c);
            swap(p,f);
        }
        int res=0;
        int cnt=min(b,p);
        b-=cnt; p-=cnt;
        res+=h*cnt;
        
        cnt=min(b,f);
        b-=cnt; f-=cnt;
        res+=c*cnt;
        
        cout<<res<<endl;
        
       
    }
 
   
}




