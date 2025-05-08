#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(511);

    cout<<v.at(2);
    cout<<v.at(3);
    cout<<v.at(4);

    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    // sort 
    sort(v.begin(),v.end());
    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }



return 0;
}