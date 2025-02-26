#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
    set<int> s; // Stores unique elements

    // Insert elements from both arrays
    for (int num : arr1) s.insert(num);
    for (int num : arr2) s.insert(num);

    // Convert set to vector
    return vector<int>(s.begin(), s.end());
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    vector<int> unionArr = findUnion(arr1, arr2);

    cout << "Union: ";
    for (int num : unionArr) cout << num << " ";
    cout << endl;

    return 0;
}
