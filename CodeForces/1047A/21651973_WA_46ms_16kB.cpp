/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
#define PI acos(-1)
using namespace std;
int main()
{
    FIO;
    ll n; cin>>n;
    if(n==3){
        printf("1 1 1\n");
    }
    if(n>3){
        ll p=n/3;
        if(p%3!=0){
            cout<<p<<" "<<p<<" "<<(n-p-p)<<endl;
        }
        if(p%3==0){
            cout<<p-1<<" "<<p-1<<" "<<n-(p-1)-(p-1)<<endl;
        }

    }





}

