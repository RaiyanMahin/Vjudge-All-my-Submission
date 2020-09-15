#include <bits/stdc++.h>
using namespace std;
int main()
{
    

    int n; cin >> n;
    vector<int > rm(n);
    vector<int > d(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> rm[i];
    }
    int mx = 0 ;
    for(int i = n - 1 ; i >= 0; i--)
    {
        if(rm[i] <= mx)
        {
            d[i]  = mx + 1 - rm[i];

        }
        else {
            mx = rm[i];
        }
    }
    for(int i = 0 ; i < n; i++)

    {
        cout << d[i] << ' ';
    }




}
