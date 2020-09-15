#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll toBinary(int n)
{
    ll res = 0, power = 1;
    while(n>=1)
    {
        res = res + power*(n%2);
        power *= 10;
        n /= 2;
    }
    return res;
}

int main()
{
    ll n, cnt = 0, x = 1;
    cin >> n;
    while(toBinary(x) <= n)
        cnt++,x++;
    cout << cnt;
   
}
