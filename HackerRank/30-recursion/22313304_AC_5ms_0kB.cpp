//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
   long int factorial(int n);
int main()
{
    int n;
   
    scanf("%d", &n);
    cout<<factorial(n)<<endl;
    return 0;
}
long int factorial(int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}