// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x = 18;
//     float y = 5.6;
    

//     int *ptr = &x;
//     cout<<"address store inside pointer is "<<ptr<<endl;
//     cout<<"value present at the address stored in the pointer is "<<*ptr<<endl;
//     //here we are using dereference operator to find the value present at the address stored in the pointer is equal to 


//     float *ptr1 = &y;
//     cout<<"address store inside pointer is "<<ptr1<<endl;
//     cout<<"value present at the address stored in the pointer is equal to"<<*ptr1<<endl;

// //here we can also update the value. let's learn through an example;
// x = 23;
// cout<<"new updated value of x is equal to 23";
// cout<<"ptr still pointing to same memory which has 23 instead of 18 - "<<*ptr<<endl;
// return 0;
// }



// updating the value using pointer 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5;
    int y = 100;
    cout<<&x<<endl;
    cout<<&y<<endl;
    int *ptr = &x;
    int *ptr1 = &y;
    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;

    x = 10;
    y = 15;

    cout<<x<<endl<<y;




return 0;
}