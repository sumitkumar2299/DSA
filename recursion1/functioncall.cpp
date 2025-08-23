// #include<bits/stdc++.h>
// using namespace std;
// int product(int a, int b){
//     return a+b;
// }
// int main(){
//     cout<<product(2,4);

// return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// // void gun(){
// //     cout<<"hello xyz";
// // }
// void fun(){
//     cout<<"hello sumit";
//     fun();
//     return;
    
// }
// int main(){
//     fun();

// return 0;
// }











#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"hello world"<<endl;
    fun(n-1);
}
int main(){
    fun(3);
return 0;
}