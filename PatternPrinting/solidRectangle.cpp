#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"no of rows";
    cin>>n;
    
    int m;
    cout<<"no of columns";
    cin>>m;

    for(int i = 1; i<=n; i++){
        for(int i  =1; i<=m; i++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}