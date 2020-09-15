#include<stdio.h>
#include<string.h>
int main()
{
    char a[106];
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
            }
            if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y'){
            printf(".%c",a[i]);
            }
    }
    return 0;
}