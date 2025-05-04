#include<bits/stdc++.h>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"enter your number";
cin>>num1>>num2>>num3;
if(num1>num2 && num1>num3){
    cout<<"The greater number is "<<num1;
}

else if(num2>num1 && num2>num3){
    cout<<"The greater number is "<<num2;
}

else{
    cout<<"The greater number is "<<num3;
}
return 0;
}