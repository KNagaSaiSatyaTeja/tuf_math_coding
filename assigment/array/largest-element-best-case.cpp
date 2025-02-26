#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        arr.push_back(e);
    }
    cout << *max_element(arr.begin(), arr.end());
}