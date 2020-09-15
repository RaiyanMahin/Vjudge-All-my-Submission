#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,n;
    cin>>x;
    cin>>n;
 
    vector<int>v;
 
    for(int i=0;i<n;i++)
    {
        int constant;
        cin>>constant;
 
        if(constant==1)
        {
            int a,b;
 
            cin>>a;
            cin>>b;
 
            v.push_back(a);
            v.push_back(b);
        }
        else
        {
            int c;
            cin>>c;
            v.push_back(c);
 
        }
    }
 
    sort(v.begin(),v.end());
 
     if(n==0)
     {
         cout<<x/2<<" "<<(x-1)-v.size()<<" ";
     }
     else
    {
        int cnt=0;
        int first_value=v[0],last_value=v[v.size()-1];
 
        cnt=cnt+ceil((first_value-1)/2.0);
 
        //cout<<cnt<<" ";
        cnt=cnt+ceil(((x-1)-last_value)/2.0);
         //cout<<cnt<<" ";
 
        for(int i=0;i<v.size()-1;i++)
        {
            int diff=(v[i+1]-v[i])-1;
            cnt=cnt+ceil(diff/2.0);
        }
 
        cout<<cnt<<" "<<x-v.size()-1<<"\n";
    }
 
 
   v.clear();
 
return 0;
}