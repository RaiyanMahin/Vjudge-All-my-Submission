#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back
        #define PI acos(-1)

        vector<int> vi;
        int main()
        {
            int t; cin >>t;
            while(t--)
            {
                 printf("Case %d:\n",i);
                vi.clear();
                int n,q; cin >>n >>q;
                for(int i=0;i<n;i++)
                {
                    int x; cin >>x;
                    vi.push_back(x);
                }
                sort(vi.begin(),vi.end());

                for(int i=1;i<=q;i++)
                {
                    int x,y; cin >>x>>y;
                    int pos1 = upper_bound(vi.begin(),vi.end(),y)-vi.begin();
                    pos1--;
                    int pos2 = lower_bound(vi.begin(),vi.end(),x)-vi.begin() ;
                    pos2--;
                     cout << pos1 - pos2 << '\n';

             }
                //cout << pos1 - pos2 << '\n';
            }


        }
