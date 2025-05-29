#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums, int n)
{
    if (n == 1)
        return;                 // Base case: if the array has one or no elements, it's already sorted
    insertionSort(nums, n - 1); // Sort the first n-1 elements
    int last = nums[n - 1];
    int j = n - 2;
    while (j >= 0 && nums[j] > last)
    {
        nums[j + 1] = nums[j]; // Shift elements to the right
        j--;
    }
    nums[j + 1] = last; // Place the last element in its correct position
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    insertionSort(nums, nums.size());
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
// step 2: If the current element is smaller than the previous element, shift the larger elements to the right.
// step 3: Place the current element in its correct position.
// step 4: Repeat the process for all elements in the array.
// step 5: The array is now sorted in ascending order.
// The recursive insertion sort implementation works by sorting the first n-1 elements and then inserting the nth element in its correct position.
// This approach ensures that the array is sorted in ascending order by the end of the recursion.