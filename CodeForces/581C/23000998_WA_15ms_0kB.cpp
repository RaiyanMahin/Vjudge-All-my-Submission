#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s = 0; cin >> n >> k; int a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    s += k;
    cout << floor(s/10) << '\n';
}