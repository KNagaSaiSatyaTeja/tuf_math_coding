#include <bits/stdc++.h>
using namespace std;

bool is_present(vector<int> &arr, int k)
{
    for (int i : arr)
    {
        if (i == k)
            return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6};
    cout << is_present(arr, 6);
}