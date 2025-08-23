#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
    if(a==0 && b == 0){
        cout<<"zero raised to power zero is not defined";
        return -100;
    }
    if(a == 0) return 0;
    int p =1;
    for(int i =1; i<=b; i++){
        p *=a;
    }
    return p; 

}


int power_rec(int x, int y){
    if(y==0) return 1;
    return x*power_rec(x,y-1);


}
int main(){
    int a;
    cout<<"enter base:",
    cin>>a;
    int b;
    cout<<"enter exponent:",
    cin>>b; 
    cout<<power_rec(a,b);

return 0;
}