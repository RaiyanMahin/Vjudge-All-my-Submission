 //TEAM NAME: CUET_18
 //BATCH-18
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    int a[n],q,i;
    for(i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d",&q);
    int p,k, cou=0;
    for(i=0; i<q;i++)
    {
        scanf("%d %d",&p,&k);
        while(1)
        {
            p=p+a[p-1]+k;
            cou++;
            if(p>n)
            {
                break;
            }
        }
        printf("%d\n", cou);
        cou =0;
    }
    return 0;
}
