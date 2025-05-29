#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int povit = nums[low];
    int i = low + 1;
    int j = high;
    while (i <= j)
    {
        while (nums[i] <= povit && i <= high)
        {
            i++;
        }
        while (j >= low && nums[j] > povit)
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
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
