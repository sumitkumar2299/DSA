#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size){
    for(int i =0; i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 void change(int b[]){
    b[0] = 100;

 }

int main(){
    int arr[5] ={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accesing the elements of array in another function 
    // updation,passed by value or passed by reference?
    display(arr,size);
    change(arr);
    display(arr,size);



return 0;
}





// passing array in the function 

#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size){
    for(int i =0; i<=size-1;i++){
        cout<<arr[i];
    }

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);


return 0;
}


