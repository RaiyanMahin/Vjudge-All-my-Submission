//RAIYAN_MAHIN
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void tripleRecursion(int n, int m, int k) {
     int i,j; int a[n][n]; 
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i==0 && j==0){
                 a[i][j] = m;
             }
             else if(i==j){
                 a[i][j] = a[i-1][j-1]+k;
             }
             
             else if(i>j){
                 a[i][j] = a[i-1][j]-1;
             }
             else if(i<j){
                 a[i][j] = a[i][j-1]-1;
             }
         }
     }
     
     
     
     
     
     
     
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
    
}



    

int main() {
    int n; 
    int m; 
    int k; 
    scanf("%i %i %i", &n, &m, &k);
    tripleRecursion(n, m, k);
    return 0;
}