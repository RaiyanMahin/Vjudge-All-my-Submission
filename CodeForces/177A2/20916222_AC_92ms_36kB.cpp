 //TEAM NAME: CUET_18
 //BATCH-18
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,sum3=0,sum4=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];


        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==j){
                    sum1+=a[i][j];
                }
                if((i+j)==(n-1) && i!=j){
                    sum2+=a[i][j];
                }
                if( i!=j && j==(n/2)){
                    sum3+=a[i][j];
//sum4+=a[i][j];
                }
                if( i!=j && i==(n/2)){
                    //sum3+=a[i][j];
                    sum4+=a[i][j];
                }
        }
    }
    cout<<sum1+sum3+sum2+sum4<<endl;
   
}
