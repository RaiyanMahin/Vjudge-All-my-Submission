/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
    int x,y,z,a,b,c; cin>>x>>y>>z>>a>>b>>c;
    if(x<=a){
         x=a-x; int g=x+b;
        if(g>=y){
            int h=g-b;
            int k=x+h+c;
            if(k>=c){
                cout<<"YES"<<endl;
            }
            
        }
    }
    else {
        cout<<"NO"<<endl;
    }
   
        
       
}
 
   





