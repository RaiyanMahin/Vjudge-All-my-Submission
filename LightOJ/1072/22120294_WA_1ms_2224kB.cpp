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
           int n; double R,e; cin>>R>>n;
           e = R*sin(PI/n)/(1+sin(PI/n)); 
            cout<<"Case"<<" "<<i<<":"<<" "<<e<<endl;
        }
    }