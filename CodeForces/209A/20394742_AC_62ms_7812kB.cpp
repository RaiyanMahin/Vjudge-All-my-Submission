    #include<bits/stdc++.h>
    using namespace std;
     
     int main()
     {
         long long n;
         cin>>n;
        long long a[n+5];
         a[0]=0;
         a[1]=1;
         for(long long i=2; i<=n+5; i++)
            a[i]=(a[i-1]+a[i-2]+2) % 1000000007;
         return cout<<a[n]<<endl,0;
     }