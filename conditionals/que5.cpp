#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"The given number is divisible by 5 and 3 both";
    }
    else{
        cout<<"given number is not divisible by 5 and 3";
    }

return 0;
}