#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    // base case -> recursion ko stop kab karna hain 
    if(n==1 || n == 0) return 1;

    // recursive call 
    return n*fact(n-1);

}
int main(){
    cout<<fact(5);
return 0;
}