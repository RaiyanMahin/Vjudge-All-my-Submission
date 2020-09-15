//#include<bits/stdc++.h>
#include<stdio.h>
//using namespace std;
int main()
{
    int N,K;
    scanf("%d%d",&N,&K);
    int a[N];
    //int maw=a[0];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int maw=a[0];
    for(int i=1;i<N;i++){
        if(a[i]>maw){
            maw=a[i];
        }
   }
   for(int i=0;i<N;i++){
    int d=maw-a[i];
    printf("%d ",d);
   }
}
