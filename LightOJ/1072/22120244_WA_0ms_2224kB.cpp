//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    #include<bitset>
    using namespace std;
    typedef long long int ll;
    typedef unsigned int ui;
    #define PI acos(-1)
    int main()
    {
        int t; cin>>t;
        for(int i=1;i<=t;i++){
            double a,b,c; cin>>a>>b;
            c = a*sin(PI/b)/(1+sin(PI/b));
            cout<<"Case"<<" "<<i<<":"<<" "<<c<<endl;
        }
    }