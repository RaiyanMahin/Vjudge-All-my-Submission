///****In the name of ALLAH, most Gracious, most Compassionate****///
///BISMILLAHIR_RAHMANIR_RAHIM
#include <bits/stdc++.h> /// this for only contest time for fast
/*
rest all header files
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <bitset>
#include <set>
#include <list>
#include <string.h>
#include <iomanip>
#include <cstring>
#include <math.h>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>
#include <utility>
#include <cstdlib>
#include <climits>
#include <ext/ext/pb_ds/assoc_container.hpp> //Common file
#include <ext/pb_ds/ext/pb_ds/tree_policy.hpp> //Including

*/
using namespace std;
//using namespace __gnu_pbds;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

///usings
using ll = long long;
using ld = long double;
using ull = unsigned long long int;

///defines
#define pf printf
#define sf scanf
#define F first
#define S second
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a * b) / ( __gcd(a, b ) )
#define pb emplace_back
#define NN "\n"
#define yes cout << "YES" << NN
#define no cout << "NO" << NN
#define p_case(r)  cout << "Case " << r++ << ":" << '\n'
#define mp make_pair
#define popb pop_back
#define ALL(a) (a.begin(), a.end())
#define SS sort(a.begin(), a.end())
#define RESS(a) reverse(a.begin(), a.end())
#define REDSS(a) sort(a.rbegin(), a.rend()) // sort by descending
#define mem(a, b) memset(a, b, sizeof(a) )
#define acum(a , init_value) accumulate(ALL(a),init_value)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define lc (node<<1)
#define rc ((node<<1)|1)
///will define getchar(), gets, getline(), stable_sort, cin.ignore()

///clock
#define dbg(args...) do { cerr << #args << " : "; faltu(args); } while(0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
void faltu() {cerr << endl;}

///debug
#define vul(x) cout << "eta x " << x << NN

///bit_using
/*
bool checkBit(ll n, ll i)
{
    return (n & (1 << i));
}
ll setBit(ll n, ll i)
{
    return (n | (1 << i));
}
ll resetBit(ll n, ll i)
{
    return (n & (~(1 << i)));
} */

///typedefs
typedef pair < ll ,ll > pll;
typedef pair < ld, ld > pld;


///constants
ll MOD = 1000000007;
ll BMOD = 1e18;
const double PI = acos(-1);
const double eps = 1e-9;

///ALGO + TACTICS START

///recursive binary_search
ll b_search(ll a[] , ll l, ll r, ll x)
{
    if(r >= l)
    {
        ll mid = l + (r - l);
        mid = mid >> 1;
        if(a[mid] == x)
            return mid;
        if(a[mid] > x)
        {
            return b_search(a, l ,mid - 1, x);
        }
        return b_search(a, mid + 1, r, x);

    }
    return -1;
}

///degree angle
double deg(double x) {  return ( (180.0 * x) / PI ); }

/// radian return
double rad(double x) { return (( x * (double)PI ) / (180.0) ); }
/// stream
ll toInt(string s){ll  sm ; stringstream ss(s); ss>> sm; return sm;} ///not_clear
///  /******IMPPP/// if n = 5; then mod can be upto 4 ex: 0 ,1,2,3,4 *****/


/// vector pair sorting compare
bool reversesort(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second > b.second);
}


/// basic_prime checker
bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(ll i = 5 ; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;

}
///make_string
/*
 string s = to_string(s);
*/

/// bigmod algo
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M) % M) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M) % M;
        return (tmp * tmp) % M;
    }

}
/***
/// BUILTIN FUNCTIONS OF GCC COMPILER
__builtin_popcount(x) == for setbits of any number
__builtin_parity(x) == return true if number has odd parity , else return 0 if number has even parity
__builtin_clz(x) == count the leading zeros of int64_t. before the 1st occurrence of 1 (set bit)
***/


/// gcd
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
/// bubble sort
/* void bubbleSort(ll arr[], ll n)
{

    for (ll i = 0; i < n-1; i++)
      for (ll j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            //swap(arr[j], arr[j+1]);
} */
/// sum and product of each digit of a number
/*
summation
while(n != 0)
    {
        s += n % 10;
        n /= 10;

    }
    return s;
product
while(m != 0)
    {
        p = p * (m % 10);
        m /= 10;
    }
return p;
*/

/// last digit of any number = n % 10;
///leap year
bool lp(int y)
{
    if(y % 400 == 0)
        return true;
    if(y % 400 != 0) {
        if(y % 100 != 0 and y % 4 == 0)
            return true;
        else return false;
    }
}
///difference check
ll di_ch(double a, double b){  return fabs(a - b) < eps; }

/// will be add Sieve, bitwise Sieve, Graph Direction f_x , f_Y, other add, subtract mod from kfoozminus Apu
/// will be add vec? dot, cross product , distance from nightfury Vai
///

/// TEMPLATE_END
/// main start
#ifdef mahin
           freopen("input.txt", "r" , stdin);
           freopen("output.txt", "w" , stdout);
    #endif // mahin

#define MX 200010
ll tree[MX<<2], lazy[MX<<2];
int vis[MX<<2], a[MX];
char b[MX];

void update_node(int node, ll val) {
	tree[node] += val;
	lazy[node] += val;
	vis[node] = 1;
}

void push(int node) {
	if(vis[node]) {
		update_node(lc, lazy[node]);
		update_node(rc, lazy[node]);
		vis[node] = 0;
		lazy[node] = 0;
	}
}

void build(int node, int l, int h) {
	if(l == h) {
		tree[node] = a[l];
		return;
	}

	int m = (l+h)/2;

	build(lc, l, m);
	build(rc, m+1, h);

	tree[node] = min(tree[lc], tree[rc]);
}

void update(int node, int l, int h, int i, int j, ll val) {
	if(i == l && j == h) {
		update_node(node, val);
		return;
	}

	push(node);

	int m = (l+h)/2;

	if(j <= m) update(lc, l, m, i, j, val);
	else if(i > m) update(rc, m+1, h, i, j, val);
	else {
		update(lc, l, m, i, m, val);
		update(rc, m+1, h, m+1, j, val);
	}

	tree[node] = min(tree[lc], tree[rc]);
}

ll query(int node, int l, int h, int i, int j) {
	if(i == l && j == h) return tree[node];

	push(node);

	int m = (l+h)/2;

	if(j <= m) return query(lc, l, m, i, j);
	else if(i > m) return query(rc, m+1, h, i, j);
	return min(query(lc, l, m, i, m), query(rc, m+1, h, m+1, j));
}


int main(  int argc, char const *argv[] )
{

    //FIO;
    ll p[4];
    int  n;
    scanf("%d",&n);
    for(int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    build(1, 0, n - 1);

    int  q;
    scanf("%d",&q);
    getchar();
    	while(q--) {
		gets(b);

		stringstream ss(b);

		int cnt = 0;
		while(ss >> p[cnt]) ++cnt;

		if(cnt == 2) {
			ll ans = -1;
			if(p[0] <= p[1]) ans = query(1, 0, n-1, p[0], p[1]);
			else ans = min(query(1, 0, n-1, p[0], n-1), query(1, 0, n-1, 0, p[1]));
			printf("%lld\n", ans);
		}
		else {
			if(p[0] <= p[1]) update(1, 0, n-1, p[0], p[1], p[2]);
			else {
				update(1, 0, n-1, p[0], n-1, p[2]);
			   	update(1, 0, n-1, 0, p[1], p[2]);
			}
		}
	}






     ///timeStamp;
    return 0;

}





