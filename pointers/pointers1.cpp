#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 56;
    cout<<&x<<endl;
    int *ptr  = &x;
    cout<<ptr<<endl;
    cout<<*ptr;
}