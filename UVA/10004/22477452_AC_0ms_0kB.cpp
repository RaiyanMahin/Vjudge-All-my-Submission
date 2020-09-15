//RAIYAN_MAHIN
#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back
        typedef vector<int> vi;

        int main()
        {
            int V, E, u,v;
            vector<vi> Adjlist;
            while(scanf("%d", &V),V)
            {
                Adjlist.assign(V,vi());
                cin >> E;
                for(int i=0; i<E; i++)
                {
                    cin >> u >>v;
                    Adjlist[u].push_back(v);
                    Adjlist[v].push_back(u);
                }
                queue<int> q;
                q.push(0);
                vi color(V,1e9);
                color[0] = 0;
                bool isBicolor = true;
                while(!q.empty() && isBicolor)
                {
                    int u = q.front();
                    q.pop();
                    for(int j=0;j<(int)Adjlist[u].size();j++)   {

                        int v = Adjlist[u][j];
                        if(color[v] == 1e9)
                        {
                            color[v] = 1 - color[u];
                            q.push(v);
                        }
                        else if(color[v] == color[u])
                        {
                            isBicolor = false;
                            break;
                        }
                    }

                }







           if(isBicolor)
                {
                    cout << "BICOLORABLE." << '\n';
                }
                else {
                    cout << "NOT BICOLORABLE." << '\n';
                }
            }

            }



