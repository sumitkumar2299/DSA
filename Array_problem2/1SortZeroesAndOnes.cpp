#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    for(int i =0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void sort01(vector<int> &v){
    int n = v.size();
    int no_of_zeroes = 0;
    int no_of_ones = 1;
    for(int i=0; i<n;i++){
        if(v[i]==0){
           no_of_zeroes++;
        }
        else{
            no_of_ones++;
        }
    }
    //filling the elements 

    for(int i=0; i<n;i++){
       if(i<no_of_zeroes) {
        v[i] = 0;
       }
       else v[i] = 1;
    }

}

int main(){
    int n;
    cout<<"enter your number of elements";
    cin>>n;

    // creating a vector 
    vector<int>v;
    cout<<"enter your elements(only 0 and 1)";
    // taking a vector 
    for(int i =0; i<=n-1; i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }

    display(v);


    // my approach 
    // int zeroes_count = 0;

    // for(int i =0; i<n;i++){
    //     if(v[i]==0){
    //         zeroes_count = zeroes_count+1;
    //     }
    // }
    // cout<<"zeroes count is"<<zeroes_count;

    // // find no. of ones in an  array
    // int ones = (n)-zeroes_count;
    // cout<<"the number of ones is"<<ones; 


    


    sort01(v);
    display(v);




return 0;
}