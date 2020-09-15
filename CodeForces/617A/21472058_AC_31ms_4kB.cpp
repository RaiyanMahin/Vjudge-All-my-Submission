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
    LL x,y,z,cnt=0; cin>>x;
    if(x%5==0){
        y=x/5; cout<<y<<endl;
    }
    if(x%5!=0){
        y=x/5; cout<<y+1<<endl;
    }
}