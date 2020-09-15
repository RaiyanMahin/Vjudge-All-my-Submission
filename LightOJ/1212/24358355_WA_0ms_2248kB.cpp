/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        string s;
        ll n,d_s,tmp; cin >> d_s >> n;
        deque<ll >dq;
        cout << "Case" << ' ' << i << ":\n";
        for(ll i = 0; i < n; i++)
        {
            cin >> s;
            if(s == "pushLeft" || s == "pushRight")
            {
                cin >> tmp;
                if(dq.size()== d_s)
                {
                    cout << "The queue is full\n";
                }
                else {
                    if(s == "pushLeft")
                    {
                        cout << "Pushed in left: " << tmp << "\n";
                        dq.push_front(tmp);
                    }
                    if(s == "pushRight")
                    {
                        cout << "Pushed in Right: " << tmp << "\n";
                        dq.push_back(tmp);
                    }
                }

            }
            if(s == "popLeft" || s == "popRight")
            {
                //cin >> tmp;
                if(dq.size()== 0)
                {
                    cout << "The queue is empty\n";
                }
                else {
                    if(s == "popLeft")
                    {
                        cout << "Popped in left: " << dq.front() << "\n";
                        dq.pop_front();
                    }
                    if(s == "popRight")
                    {
                        cout << "Popped in Right: " << dq.back() << "\n";
                        dq.pop_back();
                    }
                }

            }


        }
    }

}
