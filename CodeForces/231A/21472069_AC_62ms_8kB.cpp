/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long LL;
const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    int t,cnt=0; cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c; cin>>a>>b>>c;
        if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}