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
    LL n,k,g; cin>>n>>k; g=n/2;
    if(n%2==1)  g++;
    if(k<=g) cout<<2*k-1<<endl;
    else cout<<(k-g)*2<<endl;
}