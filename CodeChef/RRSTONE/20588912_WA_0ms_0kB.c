//#include<bits/stdc++.h>
#include<stdio.h>
//using namespace std;
int main()
{
    int N,K;
    scanf("%d%d",&N,&K);
    int A[N];
    //int maw=a[0];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int MAX=A[0];
    for(int i=1;i<N;i++){
        if(A[i]>MAX){
            MAX=A[i];
        }
   }
   for(int i=0;i<N;i++){
    int d=MAX-A[i];
    printf("%d ",d);
   }
}
