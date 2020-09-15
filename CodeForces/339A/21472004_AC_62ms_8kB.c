    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int i,j;
        char s[110],temp;
        gets(s);
        int n=strlen(s);
        for(i=0;i<n-1;i++){
            for(j=i;j<n;j+=2){
                if(s[i]>s[j]){
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        puts(s);
        return 0;
    }