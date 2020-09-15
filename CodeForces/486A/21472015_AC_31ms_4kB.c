#include <stdio.h>
 
 
 
int main()
{
    long long int n,a;
    scanf("%I64d",&n);
    if(n%2==0){
        a=n/2;
    }
    if(n%2==1){
        a=-1*(n+1)/2;
    }
    printf("%I64d\n",a);
    return 0;
}