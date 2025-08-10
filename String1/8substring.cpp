#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s  = "sumit";
    // // s.substr(idx);
    // cout<<s.substr(1)<<endl;
    //  cout<<s.substr(1,3);

    string str;
    cout<<"enter a string";
    cin>>str;
    int n = str.length(); 
    cout<<str.substr(n/2);

return 0;
}