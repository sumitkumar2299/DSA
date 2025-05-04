// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x = 10; 
//     float y = 5; 
//     //here we have to find the address of integer x and float y. so we need to use address-of operator to find the address of x and y.

//     cout<<&x<<endl;

//     cout<<&y<<endl;

//     //if we want to store the adress of integer x and float y 
//     int *ptr = &x;
//     cout<<ptr<<endl;

//     float *ptr1 = &y;
//     cout<<ptr1<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 10;
    int y = 5;
    // find the address of x and y 
    cout<<&x<<endl;
    cout<<&y<<endl;
    // store the address of x and y in pointer 
    int *ptr = &x;
    int *ptr1 = &y;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;

return 0;
}