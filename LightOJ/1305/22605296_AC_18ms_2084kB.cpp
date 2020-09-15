 //RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    ll a1,a2,b1,b2,c1,c2,area,d1,d2;
    int t;
    int main()
    {
        //FIO;
          cin >> t;
    for(int i = 1 ; i <= t; i++)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        d1=a1+c1-b1;
        d2=a2+c2-b2;
        area = (a1*(c2-b2))-(a2*(c1-b1))+((c1*b2)-(b1*c2));
        if(area<0)
            area=area*-1;
        printf("Case %d: %lld %lld %lld\n",i,d1,d2,area);
    }

}