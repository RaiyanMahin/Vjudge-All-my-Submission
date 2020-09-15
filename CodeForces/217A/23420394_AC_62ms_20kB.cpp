    #include <bits/stdc++.h>
    using namespace std;
    int x[1003] , y[1003],n;
    bool used[1003];
     
    void dfs(int u) {
    	used[u] = true;
    	for(int i = 0; i < n; ++i) {
    		if(!used[i]) {
    			if(x[i] == x[u] || y[i] == y[u])
    				dfs(i);
    		}
    	}
    }
     
    int main() {
    	cin >> n;
    	for(int i = 0; i < n; ++i) {
    		cin >> x[i] >> y[i];
    	}
    	int ans = 0;
    	for(int i = 0; i < n; ++i) {
    		if(!used[i]) {
    			dfs(i);
    			ans++;
    		}
    	}
    	cout << ans-1 << endl;
    	return 0;
    }