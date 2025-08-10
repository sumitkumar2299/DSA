#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ;
    cout<<"enter your string";
    cin>>str;
    for(int i =0; str[i]!='\0';i++){
        if(i%2==0) str[i] = 'a';
    }
    cout<<str;



return 0;
}




// agar tum string pehle se define kar rahe ho toh str[i] ke jagah sirf i use kar sakte ho 
