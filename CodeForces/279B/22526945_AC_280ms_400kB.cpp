    #include<bits/stdc++.h>
    #define MX 100005
    using namespace std;
     
    int ara[MX];
    int main(){
         int i, j, k;
         int n, t, sm, mx, e;
         cin >> n >> t;
         for(i=0; i<n; ++i) cin >> ara[i];
         sm=mx=e=0;
         for(i=0; i<n; ++i){
              for(j=max(i, e); j<n; ++j){
                   if(sm+ara[j]<=t) sm+=ara[j];
                   else break;
              }
              mx=max(mx, j-i);
              e=j;
              if(sm>=ara[i]) sm-=ara[i];
         }
         cout << mx << endl;
    }