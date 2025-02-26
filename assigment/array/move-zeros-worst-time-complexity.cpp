#include <bits/stdc++.h>
using namespace std;

void Move(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == 0)
            {

                swap(nums[j], nums[i]);
            }
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Move(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
}