/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
#define PI acos(-1)
using namespace std;
int main()
{
    FIO;
    int t ;cin>>t;
    for(int i=1; i<=t;i++){
        double r; cin>>r;
        printf("Case %d: %0.2lf\n",i, pow((2*r),2)-PI*r*r);

    }

}

