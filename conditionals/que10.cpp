#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter your number: ";
    cin>>num;
    if(num%5==0 && num%3 == 0 && num%15!=0){
        cout<<"the given number is divisible by 5 and 3 but not divisible by 15";
    }

return 0;
}