/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;
int main()
{
    FIO;
    int t,m,x,y,z,s; cin>>t;
    //int m1,m2,m3,m4,m5,m6,m7,m8,m9,m0;
    for(int i=1;i<=t;i++){
        cin>>m>>x>>y; z=x*y;
        for(int j=0;j<m;j++){
            int a[m]; cin>>a[j];
            a[j]+=z; 
        }
        //m1=a[0]; m2=a[1]; m3=a[2]; m4=a[3]; m5=a[4]; m6=a[5]; m7=a[6]; m8=a[7]; m9=a[8]; m0=a[9];
        s=a[0];
        for(int j=1;j<m;j++){
            if(s<a[i]){
                if(a[j]>=100 && a[i]-z<a[0]){
                    cout<<0<<endl;
                }
                if(a[i]<100 && a[i]-z>a[0]){
                    
                }
            }
        }
      
    }
    
}