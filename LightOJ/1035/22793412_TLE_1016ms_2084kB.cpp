#include <bits/stdc++.h>
using namespace std;
void primefact(int p ,int q)
{
    int s = 0, d;
    while(q > 0)
    {
        d = q/p;
        s += d;
        q = d;
    }
    printf("%d (%d)",p,s);
}
int main()
{
    int a[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103 };
    int t; cin >> t;
    int i,x,v;
    for(i = 1; i <= t; i++)
    {
        cin >> x;
        printf ("Case %d: %d = ",i,x);
        for(i = 0; a[i] <= x; i++)
        {
            v = a[i];
            if(i != 0)
            {
                cout << ' ' << "*" << ' ';
            }
            primefact(v,x);
            
        }
        cout << '\n';
    }
}