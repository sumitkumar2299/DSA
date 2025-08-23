#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0) return; // base class 
    print(n-1); // call 
    cout<<n<<endl; // work
}
int main(){
    print(4);

return 0;
}