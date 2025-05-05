#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number length of the array:"<<endl;
    cin>>n;

    // create an array 
    int arr[n];
    cout<<"enter your array"<<endl; 

    // taking input of an array. 

    for(int i =0; i<=n-1; i++){
        cin>>arr[i];
    }

    // // printing an array

    // for(int i =0; i<=n-1;i++){
    //     cout<<arr[i];
    // }


    // now i have to find the largest element of an array.

    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0; i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    cout<<"the maximum element in the given array is"<<max;

    

return 0;
}