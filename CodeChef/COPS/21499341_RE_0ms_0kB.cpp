/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;
int main()
{
    FIO;
    int t,m,x,y,z,s=0,a[200],b[200]={0},p,q,l=100; cin>>t;
    for(int i=1;i<=t;i++){
        cin>>m>>x>>y; z=x*y;
        for(int j=0;j<m;j++){
            cin>>a[j];
            //a[j]+=z; 
            //m1=a[0]; m2=a[1]; m3=a[2]; m4=a[3]; m5=a[4]; m6=a[5]; m7=a[6]; m8=a[7]; m9=a[8]; m0=a[9];
        }
        for(int j=0;j<m;j++){
            //p=max (1,a[i]-z);
            //q=min(100,a[i]+z);
            p=a[j]-z; if(p<1) p=1;
            q=a[j]+z; if(q>100) q=100;
            for(p=1; p<=q;p++){
                b[p]=1;
            }
            
        }
        for(int r=1;r<=l;r++){
             if(b[i]==0) s++;
        }
        cout<<s<<endl;
        
           
    }
    
}