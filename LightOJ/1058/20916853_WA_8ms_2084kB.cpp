 //TEAM NAME: CUET_18
 //BATCH-18
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int T,cnt=0;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            long long int a,b;
            cin>>a>>b;
            if(a<=0 && b<=0 ){
                cnt++;
            }



        }
        cout<<n-cnt<<endl;
        cnt=0;
    }

}
