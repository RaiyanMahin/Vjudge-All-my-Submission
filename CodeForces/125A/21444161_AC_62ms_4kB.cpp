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
  int n ;
  cin >> n ;
  if(n%3==1){
    n--;
  }
  else if(n%3==2){
    n++;
  }
  n/=3;
  cout << n/12 << " " << n%12 ;
  return 0 ;
}
