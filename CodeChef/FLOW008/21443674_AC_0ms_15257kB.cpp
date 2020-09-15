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
    FIO;
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int s; cin>>s;
        if(s<10){
            printf("What an obedient servant you are!\n");
        }
        else {
            printf("-1\n");
        }
    }
}
