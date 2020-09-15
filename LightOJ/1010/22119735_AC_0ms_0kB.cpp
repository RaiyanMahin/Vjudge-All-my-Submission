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
            int n,m,k; cin>>n>>m;
            if(n==1 || m==1) k=n*m;
            else if((n==2 || m==2)&&n%4!=0 && m%4!=0){
                if(n%2==0 && m%2==0) k = (n*m)/2 + 2;
                else k = (n*m)/2 +1;
            }
            else {
                if((n*m)%2==1) k = (n*m)/2 +1;
                else k = (n*m)/2;
            }
            cout<<"Case"<<" "<<i<<":"<<" "<<k<<endl;
        }
    }