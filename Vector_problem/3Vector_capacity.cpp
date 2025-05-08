#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);//1 1
    v.push_back(2);// 2 2
    v.push_back(3);// 3 4
    v.push_back(4);// 4 4
    v.push_back(5);// 5 8
    v.push_back(6);// 6 8
    v.push_back(2); // 7 8
    v.push_back(8); // 8 8 
    v.push_back(4); // 9 16
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"size is:"<<v.size()<<endl;
    cout<<"capacity is:"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();


    
    cout<<"size is:"<<v.size()<<endl;
    cout<<"capacity is:"<<v.capacity()<<endl;
    

return 0;
}