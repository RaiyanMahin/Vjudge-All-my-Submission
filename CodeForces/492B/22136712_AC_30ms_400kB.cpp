    #include <bits/stdc++.h>
   
    using namespace std;
    int n,i,a[100510],r,l;
    int main()
    {
        cin>>n>>l;
        for (i = 0; i < n; i++)
           cin>>a[i];
        sort(a,a+n);
        r= 2*max(a[0],l-a[n-1]);
        for (i = 0; i < n-1; i++)
            r = max(r, a[i+1]-a[i]);
        printf("%.10f\n",r/2.);
        
    }