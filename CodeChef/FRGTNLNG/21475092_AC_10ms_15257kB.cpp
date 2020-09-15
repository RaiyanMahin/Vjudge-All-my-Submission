/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
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
    bool q[10000]; 
    string s[300],t[300];
    int tc,n,k,c,g,j; cin>>tc; 
    for(int i=0;i<tc;i++){
        cin>>n>>k;  
        for(int j=0;j<n;j++){
            cin>>s[j]; q[j]=false;
        }
          for(int w=0;w<k;w++){
            cin>>c; 
            for(int g=0;g<c;g++){
                cin>>t[g];
            }
        
        for(j=0;j<n;j++){
            for(g=0;g<c;g++){
                if(s[j]==t[g]){
                    q[j]=true;
                }
            }
        }
    }
    for(j=0;j<n;j++){
            if(q[j]){
                cout<<"YES"<<" ";
            }
            else{
                cout<<"NO"<<" ";
            }
        }
        cout<<"\n";
    }
}