#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    v.push_back(5);


    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;


    v.pop_back();
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

return 0;
}