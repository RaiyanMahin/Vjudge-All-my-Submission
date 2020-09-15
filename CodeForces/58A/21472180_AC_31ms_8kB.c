    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int i,j=0,n;
        char a[7]="hello";
        char s[100];
        gets(s);
        n=strlen(s);
        for(i=0;i<n;i++){
            if(s[i]==a[j]){
                j++;
            }
        }
        if(j==5){
        printf("YES\n");
     
        }
        else {
            printf("NO\n");
        }
     
     
    }