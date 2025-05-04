#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5;
    cout<<&x<<endl;
    int *ptr = &x;
    cout<<ptr<<endl;
    x = x+1;
    cout<<x<<endl;
    cout<<ptr;
    cout<<*ptr;

return 0;
}