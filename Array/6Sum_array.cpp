#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter sizeo of an array ";
    cin>>n;
    // taking input from an array 
    int arr[n];
    cout<<"enter elements of an array";

    for(int i=0; i<=n-1; i++){
       cin>> arr[i];
    }

    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum+arr[i];
    }

    cout<<"sum of all the elements of an array is "<<sum;
    

return 0;
}