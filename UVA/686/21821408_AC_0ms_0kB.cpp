//RAIYAN_MAHIN
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
#define max 1000000
using namespace std;
bool isprime(int n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    if(n%2==1)
    {
        int b= sqrt(n);
        for(int i=3;i<=b;i+=2){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    FIO;
    ll n,m;
    while(cin>>n && n!=0){
            int cnt=0;
       for(int i=1;i<=n/2;i++) {
          if(isprime(i)){
               m=n-i;
               if(isprime(m)){
                cnt++;
               }
          }
       }
       cout<<cnt<<endl;
    }





}
