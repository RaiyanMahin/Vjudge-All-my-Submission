#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long int;
using namespace std;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
   ll n,s=0;
   FIO;
   while(cin>>n && n!=0){
   for(int i=1;i<n;i++)
   {
       for(int j=i+1;j<=n;j++){
           s += __gcd(i, j);
       }

   }
   cout<<s<<endl;
   s=0;
   }


}
