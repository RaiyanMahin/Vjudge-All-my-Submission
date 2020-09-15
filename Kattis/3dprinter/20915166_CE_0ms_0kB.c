 //TEAM NAME: CUET_18
 //BATCH-18
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n, i, mini;
    scanf("%d", &n);
    mini = n;
    for(i=0;i<n; i++)
    {
        if(pow(2,i)>=n)
        {
            break;
        }
    }
    /*if(n==1 ||n==2||n==3||n==4)
    {
        i=n-1;
    }
*/
    printf("%d", i+1);
    return 0;




}
