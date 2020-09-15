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
    int t,n,g,s=0; cin>>t;
    for(int j=1;j<=t;j++){
        int n; cin>>n; int a[n]; for(int i=0;i<n;i++) cin>>a[i];
        sort (a,a+n);
        g=a[n-1];
        for(int i=0;i<n;i++) s+=(g-a[i]); cout<<s<<endl;
        s=0;
    }
    
    
  
       
        
        
}
    
    