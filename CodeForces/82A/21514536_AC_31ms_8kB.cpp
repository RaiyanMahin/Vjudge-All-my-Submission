/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//#define endl "\n"
using namespace std;
typedef long long ll;
int main()
{
    FIO;
    ll n; cin>>n;
    char a[]="Sheldon";   char c[]="Penny";  char d[]="Rajesh";
    char b[]="Leonard";  char e[]="Howard";
    while(n>5){
        n-=4; n/=2;
    }
    if(n==1){
        cout<<a<<endl;
    }
    if(n==2){
        cout<<b<<endl;
    }
    if(n==3){
        cout<<c<<endl;
    }
    if(n==4){
        cout<<d<<endl;
    }
    if(n==5){
        /* if(n%5==0){
            cout<<e<<endl;
        }
        if(n%5==1){
            cout<<a<<endl;
        }
        if(n%5==2){
            cout<<b<<endl;
        }
        if(n%5==3){
            cout<<c<<endl;
        }
        if(n%5==4){
            cout<<d<<endl;
        }    */
        
         cout<<e<<endl;
    }
    
}
    