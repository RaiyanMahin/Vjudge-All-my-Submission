#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,r,j,k,l,m,n,ar[200],a[200];
    char s1[200],s2[200];
    scanf("%d",&t);getchar();
    for(r=1;r<=t;r++)
    {
        gets(s1);gets(s2);
        memset(ar,0,sizeof(ar));
        memset(a,0,sizeof(a));
        n=strlen(s1);
        m=strlen(s2);
        for(i=0;i<n;i++)
        {
            if(s1[i]>='A'&&s1[i]<='Z')
                s1[i]=s1[i]+('a'-'A');
            if(s1[i]>='a'&&s1[i]<='z')
            {
                ar[s1[i]]++;
            }
        }
        for(i=0;i<m;i++)
        {
            if(s2[i]>='A'&&s2[i]<='Z')
                s2[i]=s2[i]+('a'-'A');
            if(s2[i]>='a'&&s2[i]<='z')
  {
                a[s2[i]]++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ar[s1[i]]!=a[s1[i]])
                break;
        }
        if(i==n)
            printf("Case %d: Yes\n",r);
        else
            printf("Case %d: No\n",r);
    }
    return 0;
}