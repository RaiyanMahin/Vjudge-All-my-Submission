    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int n,i,count=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(i=0;i<strlen(s);i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        printf("%d\n",count);
     
    }