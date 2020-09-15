/// #RAIYAN_MAHIN
//////baal er problem
#pragma GCC target ("sse4.2")
#include <bits/stdc++.h>
using ll = unsigned long long int;
using namespace std;
//int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
//                        1, 2, 2, 3, 2, 3, 3, 4 };
////ll  countSetbits(ll n)
////{
////    ll cnt = 0;
////    while(n)
////    {
////        n &= (n - 1);
////        cnt++;
//////        cnt += n & 1;
//////        n >>= 1;
////
////    }
////    return cnt;
////
////}
//ll countSetBitsRec(ll num)
//{
//     ll nibble = 0;
//    if (0 == num)
//        return num_to_bits[0];
//
//    // Find last nibble
//    nibble = num & 0xf;
//
//    // Use pre-stored values to find count
//    // in last nibble plus recursively add
//    // remaining nibbles.
//    return num_to_bits[nibble] + countSetBitsRec(num >> 4);
//}
int main()
{
    int t; cin >> t;  ll e = 0, s = 0, n;
    for(int i = 1; i <= t; i++)
    {
         n; cin >> n;
         s = __builtin_popcount(n);
         //s = countSetBitsRec(n);
        while(s != e)
        {
            n++;
            //e = countSetBitsRec(n);
             e = __builtin_popcount(n);
            if(s == e)
            {
               cout << "Case" << ' ' << i << ":" << ' ' << n << '\n';
               break;
            }
        }
        e = 0, s = 0;

    }

}
