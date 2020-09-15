    #include <stdio.h>
    #define sz 100010
    typedef long long ll; 
    int row[sz],col[sz];
    int main()
    {
    	
    	ll n,m,i,ans,r,c,a,b;
    	scanf("%I64d %I64d",&n,&m);
    	r=n; c=n;
    	for (i=1; i<=m; i++)
    	{
    		scanf("%I64d %I64d",&a,&b);
    		if (row[a]==0) r--;
    		if (col[b]==0) c--;
    		row[a]=1; col[b]=1;
    		ans=r*c;
    		if (i==m)
    		printf("%I64d\n",ans);
    		else printf("%I64d ",ans);
    		}
    		return 0;
    	 
    }