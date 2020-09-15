#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back
        #define PI acos(-1)

        vector<int> vi;
        int main()
        {
            int t; cin >>t;
            for(int g=1;g<=t;g++)
            {

                vi.clear();
                int n,q;
                scanf("%d%d",&n,&q);
                for(int i=0;i<n;i++)
                {
                    int x;
                    scanf("%d",&x);
                    vi.push_back(x);
                }

                sort(vi.begin(),vi.end());
                printf("Case %d:\n",g);

                for(int i=1;i<=q;i++)
                {
                    int x,y;
                    scanf("%d%d",&x,&y);
                    int pos1 = upper_bound(vi.begin(),vi.end(),y)-vi.begin();
                    pos1--;
                    int pos2 = lower_bound(vi.begin(),vi.end(),x)-vi.begin() ;
                    pos2--;
                     //cout << pos1 - pos2 << '\n';
                     printf("%d\n",pos1-pos2);

             }
                //cout << pos1 - pos2 << '\n';
            }


        }
