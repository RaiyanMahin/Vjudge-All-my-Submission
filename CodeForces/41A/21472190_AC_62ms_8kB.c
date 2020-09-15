    #include<stdio.h>
    #include<string.h>
     
    int main()
    {
        char t[105],s[105];
        int count,i=0,j=0, flag=1;
        gets(t);
        gets(s);
        int l1=strlen(t), l2=strlen(s);
        if(l1==l2)
        {
            l2--;
            for(i=0;i<l1;i++)
            {
                if(t[i]!=s[l2-i])
                {
                    flag=0;
                    break;
                }
            }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
        }
        else
            printf("NO\n");
    }