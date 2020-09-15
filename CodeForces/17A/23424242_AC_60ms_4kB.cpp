    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k,i,j,c=0,p=0,m=0;
        cin>>n>>k;
       vector<int>v;
        for(i=2;i<=n;i++)
        {
            c=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c=0;
                    break;
                }
     
            }
            if(c==1)
            {
                v.push_back(i);
                p++;
            }
     
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<p;j++)
            {
                if((v[j]+v[j+1]+1)==v[i])
                {
                    m++;
                }
            }
        }
     
        if(m>=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
     
    }