#include<bits/stdc++.h>
#define si second
#define  f(i,l,r) for(int i=l;i<=r;i++)
#define  M  100009
using namespace std;
int a[2*M+2];
int b[2*M+2];
map<int,int>sm;
main()
{
   int n;  cin>>n;
   f(i,1,n)
   {
       cin>>b[i];
       a[i]=b[i]-i;
       sm[a[i]]+=b[i];
   }
   int ans=0;
   for(auto x:sm)
   {
       ans=max(ans,x.si);
   }
   cout<<ans<< '\n';
}


