/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int main()
{
    FIO;
    int x,y,z,a,b,c; cin>>x>>y>>z>>a>>b>>c;
    if(x>a){
        cout<<"NO"<<endl;
        return 0;
    }
    if(x+y>a+b){
        cout<<"NO"<<endl;
        return 0;
    }
    if(x+y+z>a+b+c){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
   
        
       
}
 
   





