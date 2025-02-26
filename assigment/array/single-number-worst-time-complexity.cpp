#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        // Count occurrences of nums[i]
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        // If count is 1, return that element
        if (count == 1)
        {
            return nums[i];
        }
    }
    return -1; // Should not happen if input is valid
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3};
    cout << "Single Element: " << singleElement(nums);
    return 0;
}
