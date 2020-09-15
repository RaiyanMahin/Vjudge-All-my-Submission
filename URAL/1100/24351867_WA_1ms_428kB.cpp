#include<bits/stdc++.h>
using namespace std;
//using ll = long long;
#define int long long
bool sortbysec(const pair<int,int> &a,
			const pair<int,int> &b)
{
	return (a.second > b.second);
}

main()
{

	vector< pair <int, int> > vect;
    int n; cin >> n ; int a[n + 10], b[n + 10];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i] >> b[i];
    }


	for (int i=0; i<n; i++)
		vect.push_back( make_pair(a[i],b[i]) );


   sort(vect.begin(), vect.end(), sortbysec);
   for (int i=0; i<n; i++)
	{

		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	vect.clear();
	//return 0;
}

