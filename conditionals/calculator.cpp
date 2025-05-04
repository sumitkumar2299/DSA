#include<bits/stdc++.h>
using namespace std;

int add(int num1, int num2){
    return num1+num2;
}

int sub(int num1, int num2){
    return num1-num2;
}

int mul(int num1, int num2){
    return num1*num2;
}

int division(int num1, int num2){
    if(num2 == 0){
        cout<<"division is not allowed";
    }
    return num1/num2;
}

int main(){
    int num1,num2;
    char operation;

    cout<<"enter the first number";
    cin>>num1;

    cout<<"enter the second number";
    cin>>num2;

    cout<<"enter your operation(+,-,*,/)";
    cin>> operation;

    // performing operation using switch case 

    int result;
    switch(operation){
        case '+': 
        result = add(num1,num2);
        break;

        case '-':
        result = sub(num1,num2);
        break;

        case '*':
        result = mul(num1,num2);
        break;

        case '/':
        result = division(num1,num2);
        break;

        default: 
        cout<<"please enter a valid operator";
        return 1;
    }

    cout<<"your result is "<<result;
    return 0;
}
