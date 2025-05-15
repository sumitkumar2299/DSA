// #include<bits/stdc++.h>
// using namespace std;
// vector<int> merge(vector<int>& arr1,vector<int>& arr2){
//     int n = arr1.size();
//     int m = arr2.size();

//     vector<int>res(m+n);
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while(i<=n && j<=m){
//         if(arr1[i]<arr2[j]){
//             res[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             res[k]= arr2[i];
//             j++;
//             k++;
//         }
//     }
// };

//     // for remaining element 
//     if(i==n){
//         while(j<=m-1){
//             res[k]= arr2[j];
//             k++;
//             j++;
//         }
//         if(j==m){
//             while(i<=n-1){
//                 res[k]= arr1[i];
//                 k++;
//                 i++;
//             }
//         }
//     }
//     return res;
    

// int main(){
    
//         // int arr1[4]= {1,4,5,8};
//         // int arr2[6] = {2,3,6,7,10,22};
//         vector<int>arr1;
//         vector<int>arr2;
//         arr1.push_back(1);
//         arr1.push_back(4);
//         arr1.push_back(5);
//         arr1.push_back(8);

//         arr2.push_back(2);
//         arr2.push_back(3);
//         arr2.push_back(6);
//         arr2.push_back(7);
//         arr2.push_back(10);

//         vector<int>v = merge(arr1,arr2);
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }

               
    

// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(n + m);
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    // Add remaining elements
    while (i < n) {
        res[k++] = arr1[i++];
    }

    while (j < m) {
        res[k++] = arr2[j++];
    }

    return res;  
}

int main() {
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {2, 3, 6, 7, 10};

    vector<int> v = merge(arr1, arr2);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
