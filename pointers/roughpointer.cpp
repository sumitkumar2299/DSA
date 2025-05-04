/*


//basics of pointers.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;
    cout<<a<<endl;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

return 0;
}


*/






/*
//addition of two number using pointers.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a  = 5;
    int b = 6;
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout<<"the sum of two number using pointer is equal to : "<<*ptr1+*ptr2;


return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5;
    int y = 10;

    cout<<x<<endl;
    cout<<y<<endl;

    cout<<&x<<endl; // fetching the address of x 
    cout<<&y<<endl; // fetching the address of y

    int *ptr1 = &x;
    int *ptr2 = &y;

    // storing the adress of x and y
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;


    cout<<"the value in x is "<<*ptr1<<endl;
    cout<<"the value in y is "<<*ptr2<<endl;


    cout<<"addition of a number is equal to "<<*ptr1+*ptr2;

return 0;
}





