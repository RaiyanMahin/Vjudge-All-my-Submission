//TEAM NAME: CUET_18
 //BATCH-18
#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    //scanf("%d%d",&a,&b);
    for(int i=1;i<=t;i++){
            scanf("%d%d",&a,&b);
    c=gcd(a,b);
    printf("%d\n",c);
    }
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,b);
        }
        else {
            return gcd(a,b-a);
        }
    }
    return a;
}
