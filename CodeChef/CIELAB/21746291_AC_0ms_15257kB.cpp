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
    int a,b;
    cin>>a>>b;
    int x=a-b;
    int rem=x%10;
    if(rem==9)x--;
    else x++;
    cout<<x<<endl;
}


