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
    char str[1105]; cin>>str;
    int cnt=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32; } cnt++;
 
            //printf("%s",str);
        if(cnt==1){
            break;
        }
    }
    printf("%s",str);
}