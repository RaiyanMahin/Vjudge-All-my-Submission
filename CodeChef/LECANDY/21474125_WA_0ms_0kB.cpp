/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#include<stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long LL;
const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    int t,g=0; cin>>t;
    for(int i=1;i<=t;i++){
        int n,c; cin>>n>>c; int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j]; g+=a[j];
        }
        if(g<=n){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
        
    }
    
}
    
    