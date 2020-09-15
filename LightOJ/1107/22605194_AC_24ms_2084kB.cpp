    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int T , i = 1;
        cin >> T;
        while(T-- && T<=50)
        {
            int x1,y1,x2,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            int M;
            cin >> M;
            printf("Case %d:\n",i);
            while (M>=1 && M<=100)
            {
                while(M--)
                {
                    int x , y;
                    cin >> x >> y;
                    if(x>x1 && x<x2 && y>y1 && y<y2)
                    {
                        printf("Yes\n");
                    }
                    else
                    {
                        printf("No\n");
      }
                }
            }
            i++;
        }
        return 0;
    }
