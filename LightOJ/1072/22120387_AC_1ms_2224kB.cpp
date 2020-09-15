//RAIYAN_MAHIN
    #include<bits/stdc++.h>
   
  
   #define PI 3.14159265
    int main()
    {
        int t,i,n;
        double R,r;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%lf %d",&R,&n);
             r=R*sin(PI/n)/(1+sin(PI/n));
            printf("Case %d: %lf\n",i,r);
        }
        return 0;
    }