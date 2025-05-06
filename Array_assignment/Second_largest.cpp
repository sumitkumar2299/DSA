// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter the length of an array:";
//     cin>>n;

//     // creating an array
//     cout<<"enter the element of an array";
//     int arr[n];

//     // taking input as an array. 

//     for(int i =0; i<=n-1;i++){
//         cin>>arr[i];
//     }

//     // finding first largest element in the array

//     int max = INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }

//     }


//     // finding the second largest element in an array
//     int second_max = INT_MIN;
//     for(int i=0;i<=n; i++){
//         if(arr[i] != max && second_max<arr[i] ){
//             second_max = arr[i];

//         }
//     }

//     cout<<"second largest element of an array is "<<second_max;
// return 0;
// }


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




