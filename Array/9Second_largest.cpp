// my approach 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the lenngth of an array";
    cin>>n;

    // create an array

    int arr[n];
    // taking input of an array

    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
    }

    // finding the first largest element in the given array.

    int max = INT_MIN;
    for(int i =0; i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    int second_max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && second_max<arr[i]){
            second_max = arr[i];
        }
    }
    
    cout<<"the second largest value of an array is"<<second_max;
    

return 0;
}

