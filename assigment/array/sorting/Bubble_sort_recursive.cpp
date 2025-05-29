#include <bits/stdc++.h>
using namespace std;

void Bubble(vector<int> &nums, int n)
{
    if (n == 1)
        return; // Base case: if the array has one or no elements, it's already sorted
    for (int i = 0; i < n - 1; i++)
    {
        swap(nums[i], nums[i + 1]);
        n--;
    }
    Bubble(nums, n); // Recursive call with reduced size
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    Bubble(nums, nums.size());
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
// Output: 1 2 4 7 9

// Time Complexity: O(n^2)
// Space Complexity: O(1) for the sorting, O(n) for the recursion stack

// The correct recursive bubble sort implementation should look like this:
// step 1: Compare adjacent elements
// step 2: Swap them if they are in the wrong order
// step 3: Call the function recursively with the size of the array reduced by one
// step 4: Repeat until the array is sorted
