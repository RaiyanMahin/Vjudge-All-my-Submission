    //RAIYAN_MAHIN
        #include<bits/stdc++.h>
        using namespace std;
        #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
        typedef long long int  ll;
        int main()

        {
            int a,b,c,e,d,x;
            while((cin >> a && a !=0), (cin >> b && b != 0), (cin >> c && c !=0 ))
            {
                x = c/b;
                 d = b-a;
                    e = c-b;
                if( d == e )
                {

                    cout << "AP" << ' ';
                    cout << c + d << '\n';
                }
                else {
                    cout << "GP" << ' ';
                    cout << c*x << '\n';

                }

            }

        }


