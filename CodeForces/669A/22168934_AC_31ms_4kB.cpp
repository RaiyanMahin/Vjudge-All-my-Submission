    #include<bits/stdc++.h>
    using namespace std;
     
   
     
    int main()
    {
    	int n;
    	cin >> n;
    	int ans = n / 3;
    	ans = ans + ans;
    	if((n % 3) > 0)
    	{
    		++ans;
    	} 
    	
    	cout << ans;
    }
     