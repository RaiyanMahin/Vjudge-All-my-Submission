//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    const double EPS = 1e-9;
    int main()
    {
        FIO;
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
         double r1,r2,r3,a,b,c,s,area,A,B,C,res; cin>>r1>>r2>>r3; a = r1+r2; b=r2+r3; c=r3+r1; s = (a+b+c)/2;
         area = sqrt(s*(s-a)*(s-b)*(s-c));
         A = acos((a*a+c*c-b*b)/(2.0*a*c));
         B = acos((a*a+b*b-c*c)/(2.0*a*b));
         C = acos((b*b+c*c-a*a)/(2.0*b*c));
         res = area-A*r1*r1*0.5-B*r2*r2*0.5-C*r3*r3*0.5;
         printf("Case %d: %0.8lf\n",i,res+EPS);


        }
    }
