// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of elements to a vector:";
//     cin>>n;
//     // create a vector 
//     vector<int>v;
//     // taking input to a vector 
//     for(int i=0; i<=n-1;i++){
//         int x ;
//         cin>>x;
//         v.push_back(x);
//     }
//     // printing an array.

//     for(int i=0; i<=v.size()-1;i++){
//         cout<<v[i];
//     }

//     int search;
//     cout<<"enter the number you want to get two sum";
//     cin>>search;

//     int two_sum = 0;

//     // Now i have to print two sum of an array. 
//     for(int i=0;i<=v.size()-1;i++){
//         for(int j = i+1; j<= v.size()-1;j++){
//             if(v[i]+v[j]==search){
//                 two_sum = two_sum+1;
//             }
//         }
       
//         }
//     }
//     cout<<"your two sum is "<<two_sum;





// return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> v;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "The vector is: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int search;
    cout << "Enter the number you want to get two sum for: ";
    cin >> search;

    int two_sum = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == search) {
                two_sum++;
            }
        }
    }

    cout << "Your two sum count is: " << two_sum << endl;

    return 0;
}
