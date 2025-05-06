#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,67,8};
    // a little bit different from integer as we have seen in the lecture.
    // array ka first element ka address pointer ke andar dala 
    int *ptr = arr;
    cout<<ptr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr[0]<<endl;
    // ptr[0] = 8;

    // for(int i=0; i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }


    // one more to print an array 
    *ptr = 8; //ptr[0]= 8
    ptr++;
    *ptr = 9;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }


return 0;
}


// array with pointer 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;// it fetches the first element 
    // now, i want to get all the elements of an array.
    for(int i=0; i<=4;i++){
        cout<<ptr[i];
    }

return 0;
}