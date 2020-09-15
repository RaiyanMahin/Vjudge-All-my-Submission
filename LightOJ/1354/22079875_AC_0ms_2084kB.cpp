//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    #include<bitset>
    using namespace std;
    typedef long long ll;
    typedef unsigned int ui;
    int BINtoDEC (int n)
    {
       /* int dec=0,i=0,rem;
        while (n!=0){
            rem = n%10; n/=10; dec+=rem*pow(2,i); ++i;
        }
        return dec;     */
        int bi=0;
        int rem,i=1;
        while(n!=0){
            rem=n%2; n/=2; bi+=rem*i; i*=10;
        }
        return bi;
    }

    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
            int a,b,c,d,x,y,z,w;   //cin>>a.>>b.>>c.>>d.>>x.>>y.>>z.>>w;
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
              scanf("%d.%d.%d.%d",&x,&y,&z,&w);

            if(BINtoDEC(a)==x &&  BINtoDEC(b)==y && BINtoDEC(c)==z && BINtoDEC(d)==w ){
                printf("Case %d: Yes\n",i);
            }
            else {
                printf("Case %d: No\n",i);
            }

        }
    }
     //binary_function
