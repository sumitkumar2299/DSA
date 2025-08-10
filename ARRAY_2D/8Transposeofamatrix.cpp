#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"enter number of rows";
    cin>>m;
    
    int n;
    cout<<"enter number of columns";
    cin>>n;

    // creating 2d array 
    int arr[m][n];

    // taking input of a 2d array

    for(int i=0; i<=m-1;i++){
        for(int j = 0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    // printing an array 

    for(int i = 0; i<=m-1; i++){
        for(int j =0; j<= n-1; j++){
            cout<<arr[i][j];
        }
    }

    // transpose of an array 

    for(int j =0; j<=n;j++){
        for(int i=0; i<=m;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    // store the transpose 

    int t[n][m];
    for(int i =0; i<n; i++){
        for(int j =0; j<m;j++){
            t[i][j] = arr[j][i];
        }
    }

    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}