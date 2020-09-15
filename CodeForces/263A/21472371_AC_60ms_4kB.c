    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
     
        int i,j,x,y,a[6][6],v;
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(a[i][j]==1){
                    x=i+1;
                    y=j+1;
                }
            }
        }
        v=abs(x-3)+abs(y-3);
        printf("%d\n",v);
    }