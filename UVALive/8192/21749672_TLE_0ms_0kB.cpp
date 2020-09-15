#include <bits/stdc++.h>
typedef unsigned long long llu;
using namespace std;
string s; llu c[1001]; int j;
bool checker(llu n){
    string a;
    for(int i=0;n;i++){
        int t = n%10;
        n/=10;
        a+=(t+'0');
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<j;i++){
        if(s[c[i]]!=a[c[i]]) return false;
    }
    return true;
}
llu check(llu n){
    llu i=1,k=0;
    while(i<=n){
        i*=10;
        k++;
    }
    return k;
}
llu digit(int l){
    int i=0; llu temp=0;
    for(i=0;i<l;i++){
        temp*=10;
        if(s[i]=='?') temp+=9;
        else {temp+=s[i]-'0';c[j]=i;j++;}
    }
    return temp;
}
int main(){
    int n;
    cin >> s >> n;
    int l=s.size();
    llu mid,ans,high=digit(l),low=0;
    while(low<=high){
        mid=(low+high)/2;
        int k=check(mid);
        if(k==l && mid%n==0 && checker(mid)){
            ans=mid;
            high = mid-1;
        }
        else if(k<l || mid%n || checker(mid)==false) low = mid+1;
        else high = mid-1;
    }
    cout << ans <<endl;
}
