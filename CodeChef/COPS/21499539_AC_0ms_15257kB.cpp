/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//#define endl "\n"

using namespace std;
int main()
{
    FIO;
    int t;  cin>>t;
    for(int k=1;k<=t;k++){
        int m,x,y;  cin>>m>>x>>y;
		int z=x*y;
		
		int a[101]={0},i,j,b;
		for(i=0;i<m;i++)
		{
			cin>>b;
			int p=b-z;
			int q=b+z;
			if(p<1)
			p=1;
			if(q>100)
			q=100;
			
			for(j=p;j<=q;j++)
			a[j]=1;
		}
		int cnt=0;
		for(i=1;i<101;i++)
		{
			if(a[i]==0)
			cnt++;
		}
		cout<<cnt<<endl;       
    }
}
    