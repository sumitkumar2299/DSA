#include<bits/stdc++.h>
using namespace std;
int main(){

    // create a vector 
    int n;
    cout<<"enter your elements";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

return 0;
}