/* AUTHOR : RAIYAN MAHIN */
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    int T; cin>>T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> v(1 << N);
        for (int i = 0; i < (1 << N); i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        map<int, int> cnt;

        for (int i = 0; i < N; i++) {
            vector<int> v_2;
            cout << v[1] << ' ';

            for (int j = 0; j < v.size(); j++) {
                if (cnt[v[j]])
                    cnt[v[j]]--;
                else {
                    v_2.push_back(v[j]);
                    cnt[v[j] + v[1]]++;
                }
            }

            v = v_2;
        }


    }
}

