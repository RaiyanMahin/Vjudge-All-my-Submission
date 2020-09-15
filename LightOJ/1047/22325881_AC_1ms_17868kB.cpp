//RAIYAN_MAHIN
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
#define max3(a,b,c) max(a,b) > max(b,c) ? max(a,b): max(b,c)
#define min3(a,b,c) min(a,b) < min(b,c) ? min(a,b): min(b,c)
#define SIZE 1000000
using namespace std;
int a[SIZE][4];
int main()
{
    FIO;
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j][0]>>a[j][1]>>a[j][2];
        }

        for(int j=0;j<n;j++){

                a[j][0] +=min(a[j-1][1],a[j-1][2]);
                a[j][1] +=min(a[j-1][0],a[j-1][2]);
                a[j][2] +=min(a[j-1][1],a[j-1][0]);

        }
        printf("Case %d: %d\n",i,min3(a[n-1][0],a[n-1][1],a[n-1][2]));


    }
}
