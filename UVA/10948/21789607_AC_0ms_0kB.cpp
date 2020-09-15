//RAIYAN_MAHIN
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
#define max 1000000
using namespace std;
bool isprime(int n)
{
   int v=sqrt(n);
   for(int i=2;i<=v;i++){
     if(n%i==0){
        return false;
     }
   }
   return true;
}
int main()
{
    FIO;
    int n,i;
    while(cin>>n && n!=0){
        if(n%2==1){
            if(isprime(n-2))
            {
                printf("%d:\n2+%d\n",n,n-2);
            }
            else {
                 printf("%d:\nNO WAY!\n",n);
            }
        }
        else {
            for(int i=3;i<=n;i++){
                if(isprime(i) && isprime(n-i)){
                     printf("%d:\n%d+%d\n",n,i,n-i);  break;
                }
            }
        }

    }



}
