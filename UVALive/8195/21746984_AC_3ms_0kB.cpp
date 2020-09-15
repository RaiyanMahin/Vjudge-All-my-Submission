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
    //FIO;
    int a,b,c,d,e,f,sum;
    while(scanf("%d%d%d%d%d%d",&a,&b ,&c ,&d,&e,&f)!=EOF){
     sum=0;
    if(a<d) sum += (d-a);
    if(b<e) sum += (e-b);
    if(c<f) sum += (f-c);
    cout << sum <<endl;
    }








}

