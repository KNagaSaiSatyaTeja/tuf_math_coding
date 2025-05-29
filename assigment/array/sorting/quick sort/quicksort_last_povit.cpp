#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[high]; // Use the last element as pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]); // Place pivot at the correct position
    return i + 1;
}

void Quick(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int p = partition(nums, low, high);
        Quick(nums, low, p - 1);
        Quick(nums, p + 1, high);
    }
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9, 0, 11};
    Quick(nums, 0, nums.size() - 1);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
