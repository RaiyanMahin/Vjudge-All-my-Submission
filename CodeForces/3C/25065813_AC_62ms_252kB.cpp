/// yo mama game.. though make it complex
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    char a[3][3];
    char XX = 'X';
    char OO = '0';
    ll DD = 0;
    for(ll i = 0; i < 3; i++)
    {
        for(ll j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    ll c_x = 0, c_d = 0, c_o = 0;
     for(ll i = 0; i < 3; i++)
    {
        for(ll j = 0; j < 3; j++)
        {
            if(a[i][j] == 'X')
                c_x++;
            if(a[i][j] == '.')
                c_d++;
            if(a[i][j] == '0')
                c_o++;
        }
    }
    if(c_d != 0)
    {

        if(c_x < c_o)
        {
            return cout << "illegal\n" , 0;
        }

        if(c_x > c_o)
        {


                if( (a[0][0] == XX && a[1][1] == XX && a[2][2] == XX) || (a[0][2] == XX && a[1][1] == XX && a[2][0] == XX) || (a[0][0] == XX && a[0][1] == XX && a[0][2] == XX) || (a[1][0] == XX && a[1][1] == XX && a[1][2] == XX) || (a[2][0] == XX && a[2][1] == XX && a[2][2] == XX) || (a[0][0] == XX && a[1][0] == XX && a[2][0] == XX) ||  (a[0][1] == XX && a[1][1] == XX && a[2][1] == XX) ||  (a[0][2] == XX && a[1][2] == XX && a[2][2] == XX) )
                {
                    if(c_x - c_o > 1)
                    {
                        return cout << "illegal\n" , 0;
                    }
                    if(c_x - c_o == 1)
                    {
                        return cout << "the first player won\n", 0;

                    }


                }
                if( (a[0][0] == OO && a[1][1] == OO && a[2][2] == OO) || (a[0][2] == OO && a[1][1] == OO && a[2][0] == OO) || (a[0][0] == OO && a[0][1] == OO && a[0][2] == OO) || (a[1][0] == OO && a[1][1] == OO && a[1][2] == OO) || (a[2][0] == OO && a[2][1] == OO && a[2][2] == OO) || (a[0][0] == OO && a[1][0] == OO && a[2][0] == OO) ||  (a[0][1] == OO && a[1][1] == OO && a[2][1] == OO) ||  (a[0][2] == OO && a[1][2] == OO && a[2][2] == OO) )
                {
                    return cout << "illegal\n", 0;


                }
                else{
                        if(c_x - c_o > 1)
                    {
                        return cout << "illegal\n" , 0;
                    }
                    if(c_x - c_o == 1)
                    {
                        return cout << "second\n", 0;

                    }
                        //return cout << "second\n" , 0;
                }





        }
        if(c_x == c_o)
        {
            if( (a[0][0] == XX && a[1][1] == XX && a[2][2] == XX) || (a[0][2] == XX && a[1][1] == XX && a[2][0] == XX) || (a[0][0] == XX && a[0][1] == XX && a[0][2] == XX) || (a[1][0] == XX && a[1][1] == XX && a[1][2] == XX) || (a[2][0] == XX && a[2][1] == XX && a[2][2] == XX) || (a[0][0] == XX && a[1][0] == XX && a[2][0] == XX) ||  (a[0][1] == XX && a[1][1] == XX && a[2][1] == XX) ||  (a[0][2] == XX && a[1][2] == XX && a[2][2] == XX) )
                {
                    return cout << "illegal\n", 0;


                }
            if( (a[0][0] == OO && a[1][1] == OO && a[2][2] == OO) || (a[0][2] == OO && a[1][1] == OO && a[2][0] == OO) || (a[0][0] == OO && a[0][1] == OO && a[0][2] == OO) || (a[1][0] == OO && a[1][1] == OO && a[1][2] == OO) || (a[2][0] == OO && a[2][1] == OO && a[2][2] == OO) || (a[0][0] == OO && a[1][0] == OO && a[2][0] == OO) ||  (a[0][1] == OO && a[1][1] == OO && a[2][1] == OO) ||  (a[0][2] == OO && a[1][2] == OO && a[2][2] == OO) )
                {
                    return cout << "the second player won\n", 0;


                }
            else{
                return cout << "first\n" , 0;
            }

        }


    }
    if(c_d == 0)
    {
        if(c_x <= c_o)
        {
            return cout << "illegal\n", 0;
        }

        if(c_x > c_o)
        {


            if( (a[0][0] == XX && a[1][1] == XX && a[2][2] == XX) || (a[0][2] == XX && a[1][1] == XX && a[2][0] == XX) || (a[0][0] == XX && a[0][1] == XX && a[0][2] == XX) || (a[1][0] == XX && a[1][1] == XX && a[1][2] == XX) || (a[2][0] == XX && a[2][1] == XX && a[2][2] == XX) || (a[0][0] == XX && a[1][0] == XX && a[2][0] == XX) ||  (a[0][1] == XX && a[1][1] == XX && a[2][1] == XX) ||  (a[0][2] == XX && a[1][2] == XX && a[2][2] == XX) )
            {
                    if(c_x - c_o > 1)
                    {
                        return cout << "illegal\n" , 0;
                    }
                    if(c_x - c_o == 1)
                    {
                        return cout << "the first player won\n", 0;

                    }


        }
         if( (a[0][0] == OO && a[1][1] == OO && a[2][2] == OO) || (a[0][2] == OO && a[1][1] == OO && a[2][0] == OO) || (a[0][0] == OO && a[0][1] == OO && a[0][2] == OO) || (a[1][0] == OO && a[1][1] == OO && a[1][2] == OO) || (a[2][0] == OO && a[2][1] == OO && a[2][2] == OO) || (a[0][0] == OO && a[1][0] == OO && a[2][0] == OO) ||  (a[0][1] == OO && a[1][1] == OO && a[2][1] == OO) ||  (a[0][2] == OO && a[1][2] == OO && a[2][2] == OO) )
        {
                    return cout << "the second player won\n" , 0;

        }
        else{
            return cout << "draw\n" , 0;
        }
        }

    }




}