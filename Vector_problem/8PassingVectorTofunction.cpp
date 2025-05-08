#include<bits/stdc++.h>
using namespace std;
void change(vector<int>a){ //a-> 9 10 6 7 
    a[0] = 100; // a-> 100 10 6 7
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


return 0;
}


// vector are passed by value, each time you pass, new vector is created. 
