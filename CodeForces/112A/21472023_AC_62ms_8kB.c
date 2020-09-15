    #include<stdio.h>
    #include<string.h>
     
    int main()
    {
        char s1[105],s2[105];
        int i,x,l1,l2;
     
        gets(s1);
        gets(s2);
        l1=strlen(s1);
        l2=strlen(s2);
     
     
        x=strcasecmp(s1,s2);
        if(x>0) printf("1\n");
     
        else if(x<0) printf("-1\n");
        else printf("0\n");
     
     
        return 0;
     
    }