#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;

    int n;
    cout<<"enter the number of columns";
    cin>>n;

    int o;
    cout<<"enter the number of rows for matrix 2";
    cin>>o;
     int p;
    cout<<"enter the number of columns for matrix 2";
    cin>>p;

    // creating a two dimensional array 

    int arr[m][n]; 
    int arr[o][p];

    // taking input 
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }


     for(int k=0; k<=m-1; k++){
        for(int l=0; l<=n-1; l++){
            cin>>arr[o][p];
        }
    }


    // addition of matrix 
    // first of all we have to check order 

    if(m==0 && n==p){
        cout<<"addition is not possible for the given matrix";
    }
    // now add the given matrix 

    

    int q;
    cout<<"enter the number of rows(rows should be same as above )";
    cin>>q;

    int r; 
    cout<<"enter the number of columns(columns should be same as above)";
    cout<<r;

    int arr[q][r];


    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            arr[q][r]= arr[m][n] + arr[o][p];
        }
    }


    

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[q][r]<<" ";
        }
    }


return 0;
}






// next is transpose of a matrix 
// 90 degree transformation of an array problem 
// transformation of an array using transpose 