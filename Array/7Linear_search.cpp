#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of an array";
    cin>>n;

    // create an array having an input n

    int arr[n];
    cout<<"enter your elements in an array";

    for(int i=0; i<=n-1;i++ ){
        cin>>arr[i];
    }

    // linear search we have to find the given element of ana array. 
    int x;
    cout<<"enter your number to be search"<<endl;
    cin>>x;

    // now it's time to search element of an array.

    bool flag = false; // by default not present 

    for(int i=0;i<=n-1; i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag == true){
        cout<<"element found at index i";
    }
    else{
        cout<<"element not found";
    }



return 0;
}