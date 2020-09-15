#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[10000],n,m,i,j;
    float p,br=0;
    cin>>n>>m;
    for (i=1;i<=m;i++)
    cin>>a[i];
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        if (i==a[j]) br++;
        p=br/m;
        p=p*100;
        printf("%.2lf",p);
        cout<<"%"<<endl;
        br=0;
    }
    return 0;
}
