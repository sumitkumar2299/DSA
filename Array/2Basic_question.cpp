// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[6];
//     // input
//     for(int i = 0;i<=5;i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<=5;i++){
//         if(marks[i]<35){
//             cout<<i<<" ";
//         }
//     }

// return 0;
// }



// taking input in a different way 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    int marks[n];
    cout<<"enter your marks";

    for(int i=0;i<=n;i++){
        cin>>marks[i];
    }

    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i;
        }
    }


return 0;
}