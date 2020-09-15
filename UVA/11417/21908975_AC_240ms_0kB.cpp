//RAIYAN MAHIN
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
   ll n,s=0;
   while(cin>>n && n!=0){
   for(int i=1;i<n;i++)
   {
       for(int j=i+1;j<=n;j++){
           s+=gcd(i,j);
       }
       
   }
   cout<<s<<endl;
   s=0;
   }
  
   
}