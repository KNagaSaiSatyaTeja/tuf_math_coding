#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    insertionSort(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}

// Output: 1 2 4 7 9
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// step 1: Start from the second element and compare it with the elements before it.
// step 2: If the current element is smaller than the previous element, swap them.
// step 3: Continue swapping until the current element is in the correct position.
// step 4: Repeat the process for all elements in the array.
// step 5: The array is now sorted in ascending order.
