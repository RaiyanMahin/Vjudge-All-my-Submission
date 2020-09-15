/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
using namespace std;
void prime (int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++){
        int f=i,m=0; 
        for(int j=2; j*j<=n;j++){
            if(f%j==0){
                f/=j; m++;
                while(f%j==0){
                    f/=j;
                }
            }
        }
        if(f!=1) m++;  if(m==2) cnt++;
    }
    cout<<cnt<<endl;
    
}
int main()
{
    int n; cin>>n;  prime(n);
}