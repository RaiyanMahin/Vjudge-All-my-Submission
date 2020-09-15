/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
int prime (int n)
{
   for(int k=2;k*k<=n;k++){
       if(n%k==0){
           return 0;
       }
   } 
   return 1;
    
}
int main()
{
   int t,f; cin>>t;
   for(int i=1;i<=t;i++){
       int n; cin>>n; 
       for(f=n/2;f<=n;f++){
           if(prime(f)){
               if(f*2>n) break;
           }
       }
       cout<<f<<endl;
       
   }
}