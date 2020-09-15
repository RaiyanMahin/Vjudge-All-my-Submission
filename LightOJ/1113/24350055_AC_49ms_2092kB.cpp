/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t ,r = 1; cin >> t;
    while(t--)
    {
        printf("Case %d:\n",r++);
        string str,x,y,tmp;
        stack<string > s1;
        stack < string > s2;
        x = "http://www.lightoj.com/";
        s1.push(x);
        while(cin >> y)
        {
            if(y == "QUIT")
                break;
            if(y == "VISIT")
            {
                cin >> x;
                cout << x << '\n';
                s1.push(x);
                if(!s2.empty())
                {
                    while(!s2.empty())
                    {
                        s2.pop();
                    }
                }
            }
            else {
                if(y == "BACK")
                {
                    tmp = s1.top();
                    s2.push(tmp);
                    s1.pop();
                    if(!s1.empty())
                    {
                        cout << s1.top() << '\n';
                    }
                    else {
                        cout << "Ignored" << '\n';
                        tmp = s2.top();
                        s1.push(tmp);
                        s2.pop();
                    }
                }
                else if(y == "FORWARD")
                {
                    if(!s2.empty())
                    {
                        cout << s2.top() << '\n';
                        tmp = s2.top();
                        s1.push(tmp);
                        s2.pop();
                    }
                    else {
                        cout << "Ignored" << '\n';
                    }
                }
            }
        }

    }



}
