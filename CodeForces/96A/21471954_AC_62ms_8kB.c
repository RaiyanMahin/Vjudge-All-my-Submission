    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int c=0,b=0,i,s=0;
        char a[105];
        gets(a);
        for(i=0;i<strlen(a);i++){
            if(a[i]=='1') {
                    c++;
                    b=0;
            }
            else {
                    b++;
                    c=0;
            }
     
     
        if(c>=7 || b>=7){
                s=1;
        break;
        }
        }
     
       if(s==1){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
     
     
     return 0;
     
     
    }