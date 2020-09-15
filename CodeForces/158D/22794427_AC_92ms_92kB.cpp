#include <bits/stdc++.h>
using namespace std;
//int N = 1e5;
//int mx = -1e9;
int main()
{
    int n; cin >> n ; 
    vector<int> a(n);
    for(int i = 0; i < n  ; i++)
    {
        cin >> a[i];
    }
    int mx = -1e9;
    for(int i = 1 ; i < (n+1) / 2 ; i++)
    {
        if ( n % i != 0) continue;
        for( int j = 0 ; j < i; j++)
        {
            int s = 0 ;
            for( int k = j; k < n ; k += i)
                s += a[k];
                mx = max(mx,s);
            
        }
    }
    
    cout << mx << '\n';
}
