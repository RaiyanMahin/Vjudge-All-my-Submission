// TEAM NAME: CUET_KNIGHTMARE
//CUET BATCH-18 id: 1804097,1804109,1804113
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    ll a,b,c,d,e,f,sum=0;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if(a<=d) sum += (d-a);
    if(b<=e) sum += (e-b);
    if(c<=f) sum += (f-c);
    cout << sum;








}

