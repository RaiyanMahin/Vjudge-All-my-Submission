#include<stdio.h>

int main(){
    int t;
    long ans=0;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int l,k;
        scanf("%d%d",&l,&k);
                      int n=l-k+1;

        for(int j=1; j<=n; j++) ans+=j;
        printf("Case %d: %d\n",i,ans);
    }

}
