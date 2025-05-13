// sort the zeroes and ones in an array condition is we have traverse only one 
// time in an array.  
 
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
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        if(i>j){
            break;
        }
        if(v[i]==1 && v[j]==0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
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
    sort01(v);
    display(v);

     

return 0;
}