
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