    #include <bits/stdc++.h>
    using namespace std;
     
    int a[100005];
    bool vis[100005];
    vector <int> v[100005];
    int cnt;
    void fast(){
    	std::ios_base::sync_with_stdio(0);
    	cin.tie(NULL);
    	cout.tie(NULL);
    }
    void dfs(int s, int x, int m){
    	    if(a[s] == 1)
    			x++;
    		else if(a[s] == 0)
    			x = 0;
    		if(x > m) 
    			return;
    		bool flag = 0;
    		for(int i = 0; i < v[s].size(); i++){
    			if(vis[v[s][i]] == 0){
    				flag = 1;
    				vis[v[s][i]] = 1;
    				dfs(v[s][i],x,m);
    			}
    		}
    		if(x <= m && flag == 0){
    			cnt++;
    			return;
    		}
    }
     
    int main(){
    	fast();
    	int n,m;
    	cin >> n >> m;
    	
    	for(int i = 1; i <= n; i++)
    		cin >> a[i];
    	for(int i = 0; i < n-1; i++){
    		int a,b;
    		cin >> a >> b;
    		v[a].push_back(b);
    		v[b].push_back(a);
    	}
    	vis[1] = true;
    	dfs(1,0,m);
    	cout << cnt << endl;
     
    	return 0;
    }