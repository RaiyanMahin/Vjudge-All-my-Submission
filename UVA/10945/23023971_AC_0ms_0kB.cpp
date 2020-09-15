#include<bits/stdc++.h>
#include<iterator>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define M 7
using namespace std;
typedef long long int ll;

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        if(a=="DONE")break;
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        //cout<<a<<endl;
        string b;
        for(int i=0;i<a.size();i++)
        {
            if( a[i]>='A' and a[i]<='Z')b=b+a[i];
        }
        bool flag=true;
        string c=b;
        reverse(c.begin(),c.end());
        if(b==c)cout<<"You won't be eaten!\n";
        //cout<<b<<endl;
       // if(flag==true)cout<<"You won't be eaten!\n";
        else cout<<"Uh oh..\n";
    }
}
