#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
    int count=0;
    scanf("%s",str);
    int i;
    for(i=1;i<=strlen(str);i++){
        if(str[i]>=65 && str[i]<=90){
            count++;
            }
    }
    if(count==strlen(str)-1){
        for(i=0;i<=strlen(str);i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
            }
            else if(str[i]>=65 && str[i]<=90){
                str[i]+=32;
            }
        }
    }
 
             printf("%s",str);
 
 
 
 
 
 
      return 0;
}