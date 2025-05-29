#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &nums)
{
    if (nums.empty()) return 0; // Handle empty array case

    sort(nums.begin(), nums.end()); // O(n log n)

    int i = 0, expected = 0; // Two pointers: one for nums, one for expected value
    while (i < nums.size()) {
        if (nums[i] != expected) return expected; // Missing number found
        i++;
        expected++;
    }

    return expected;
}

int main()
{
    vector<int> array = {};
    cout << missing(array);
}
