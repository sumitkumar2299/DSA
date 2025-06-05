#include<bits/stdc++.h>
using namespace std;
int main(){
    int m; 
    // in rows 
    cout<<"enter your roll number";
    cin>>m;

    int n; 
    // in column
    cout<<"enter your marks"; 
    cin>>n;

    int arr[m][n];

    // taking input 
    for(int i=0; i<=m-1; i++ ){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }



return 0;
}