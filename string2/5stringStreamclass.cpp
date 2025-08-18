#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "i am sumit kumar";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

return 0;
}