/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define long long LL
const int MAX=2e5+7;
using namespace std;
int main()
{
  int n,m ,s; cin>>n>>m;
  for(int i=1;i<=m;i++){
    s=n/m;
    if(n%m!=0){
        s++; n--;
    }
    cout<<s<<" ";
  }
  cout<<"\n";
}
