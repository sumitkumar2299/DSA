// determine seller has made profit or loss and also determine how much seller has made 
// profit or loss

#include<bits/stdc++.h>
using namespace std;
int main(){
    int CostPrice, SellingPrice;
    cout<<"Enter your Cost price: ";
    cin>>CostPrice;

    cout<<"Enter your Selling price: ";
    cin>>SellingPrice;

    if(SellingPrice>CostPrice){
        cout<<"your profit is: "<<SellingPrice-CostPrice;
    }

    else if(SellingPrice == CostPrice){
        cout<<"No profit No loss";
    }

    else{
        cout<<"your loss is: "<<CostPrice - SellingPrice;
    }
return 0;
}