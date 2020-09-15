//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    #include<bitset>
    using namespace std;
    typedef long long int ll;
    typedef unsigned int ui;
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++){
            int a,b,c; cin>>a>>b;
            if(a==1 || b==1){
                c = a*b;
                printf("Case %d: %d\n",i,c);
            }
            if(a<=b){
              if(b%2==0){
                c = (a*b)/2;
            }
            if(b%2!=0){
                c = (a*b)/2;
                c = c+1;
            }
            printf("Case %d: %d\n",i,c);
            }
            if(a>b){
                 if(a%2==0){
                c = (a*b)/2;
            }
            if(a%2!=0){
                c = (a*b)/2;
                c = c+1;
            }
            printf("Case %d: %d\n",i,c);
            }


        }
    }
