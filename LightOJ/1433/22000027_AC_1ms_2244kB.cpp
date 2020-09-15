//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define PI acos(-1)
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
           double x1,x2,y1,y2,o1,o2,a,b,c,ar; cin>>o1>>o2>>x1>>x2>>y1>>y2;
           a = sqrt(pow((o1-x1),2)+pow((o2-x2),2));
            b = sqrt(pow((x1-y1),2)+pow((x2-y2),2));
            c= acos((2*a*a-b*b)/(2*a*a)); ar=c*a;
            printf("Case %d: %lf\n",i,ar);

        }
    }
