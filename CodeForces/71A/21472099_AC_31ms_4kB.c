    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char a[6000];
        int n,i,len,x;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        scanf("%s",&a);
        len=strlen(a);
     
        if(len>10){
            x=len-2;
          printf("%c",a[0]);
          printf("%d",x);
          printf("%c\n",a[len-1]);
            }
         else printf("%s\n",a);
        }
        return 0;
     
    }