#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of an array:";
    cin>>n;

    // creating an array
    cout<<"enter the element of an array";
    int arr[n];

    // taking input as an array. 

    for(int i =0; i<=n-1;i++){
        cin>>arr[i];
    }

    int product = 1;
    for(int i=0;i<=n-1;i++){
        product = product*arr[i];
    }

    cout<<"the product of given array is"<<product;


return 0;
}