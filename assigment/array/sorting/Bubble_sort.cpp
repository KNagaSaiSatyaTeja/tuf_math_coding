#include <bits/stdc++.h>
using namespace std;

void Bubble(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = 0; j < nums.size() - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    Bubble(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}