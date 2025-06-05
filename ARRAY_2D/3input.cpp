#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows: "; 
    cin>>m;
    int n;
    cout<<"enter the number of columns";
    cin>>n;
    int arr[m][n];
    // taking input 
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    // printing the value of 2d array 

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }




return 0;
}