/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;
int main()
{
    FIO;
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int m,x,y; cin>>m>>x>>y;
        int z=x*y;
        int u[101]={0},k,j,w;
        for(j=0;j<m;j++){
            cin>>k;
            int p=k-z;
            if(p<1){
                p=1;
            }
            int q=k+z;
            if(q>100){
                q=100;
            }
            for(w=p;w<=101;w++){
                u[w]=1;
            }
            
        }
        int cnt=0;
        for(j=1;j<101;j++){
            if(u[j]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}