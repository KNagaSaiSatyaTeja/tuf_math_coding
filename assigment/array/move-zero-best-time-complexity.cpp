#include <bits/stdc++.h>
using namespace std;

void Move(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] != 0)
        {

            swap(nums[j], nums[i]);
            j++;
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