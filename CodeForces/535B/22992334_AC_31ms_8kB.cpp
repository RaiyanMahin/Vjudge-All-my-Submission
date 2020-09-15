
#include<bits/stdc++.h>

//const int MAX=2e5+7;
using namespace std;
int main()
{
    char n[100];
    int index = 0;
    scanf("%s" , n);
    for(int i = 0 ; i < strlen(n); i++)
    {
        index += (1 << i);
    }
    for(int i = 0 ; i < strlen(n);  i++)
    {
        if(n[strlen(n)-1-i] == '4')
            index += (0 << i);
        else
            index += (1 << i);
    }
    cout << index << '\n';
}
