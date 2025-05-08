// last occurence of x in an array 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter your elements";
    cin>>n;
    // create a vector 
    vector<int>v;
    // taking input of a vector 
    for(int i=0; i<=n;i++){
        int x;
        
        cin>>x;
        v.push_back(x);
    }

    // printing output of  a vector 

    for(int i=0; i<=n; i++){
        cout<<v[i]<<" ";
    }

    // finding last occurence of an index 
    int y ;
    int index = -1;
    cout<<"enter your number you want to search last occurence";
    cin>>y;


    for(int i=n; i<=0;i--){
        if(v[i]==y){
            index = i;
        }

    }
    cout<<index;




return 0;
}