#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str = "i am sumit kumar";
    // cout<<str.length(); // 0 to str.length()-1
    // int len = str.length();

    // push_back and pop_back 
    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;





    // + operator (important bahut kam ayega)

    // string  s = "abc";
    // cout<<s<<endl;
    // string t = "def";
    // s = s+t; // add the string
    // cout<<s<<endl;

    // reverse 

    string s= "abcdef";// 0 1 2 3 4 
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    reverse(s.begin()+2,s.end());
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;




return 0;
}