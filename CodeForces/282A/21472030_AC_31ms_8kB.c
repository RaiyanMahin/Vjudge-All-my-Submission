#include<stdio.h>
int main()
{
    int n,p=0,i;
    char b[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%s",b);
           if(b[0]=='-' || b[2]=='-') p-=1;
           else if(b[0]=='+' || b[2]=='+') p+=1;
    }
    printf("%d\n",p);
 
 
 
        return 0;
    }