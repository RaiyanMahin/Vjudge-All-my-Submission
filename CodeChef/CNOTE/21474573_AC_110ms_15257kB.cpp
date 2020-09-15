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
   int t,x,y,k,n,p,c,g,cnt=0,cnt2=0; cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>k>>n; g=x-y;
        for(int j=1;j<=n;j++){
            cin>>p>>c;
            
            if(g<=p && k>=c){
               
                cnt++;
            }
            else {
                
                cnt2++;
            }
        }
        if(cnt>0 ){
            cout<<"LuckyChef"<<endl;
        }
        if(cnt2>0 && cnt==0){
            cout<<"UnluckyChef"<<endl; 
        }
         
        cnt=0; cnt2=0;
       
        
        }
    }
    
    