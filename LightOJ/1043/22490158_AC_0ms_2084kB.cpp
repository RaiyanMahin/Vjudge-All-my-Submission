#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back

           int main()
         {
    int i,t;
    double AB,BC,CA,AD,DE,ratio;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>AB>>CA>>BC>>ratio;
        ratio = ratio/(ratio+1);
        AD = AB*sqrt(ratio);
        printf("Case %d: %lf\n",i,AD);
    }

}








