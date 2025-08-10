#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "sumit";
   
    // counting the vowel from a string 
    int  count = 0;
    for(int i=0; i<=4;i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] =='o'|| str[i] == 'u'){
            count++;
        }
    }
    cout<<count;

return 0;
}