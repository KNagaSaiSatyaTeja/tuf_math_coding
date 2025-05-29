#include <bits/stdc++.h>
using namespace std;

void selection(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        swap(nums[i], nums[min]);
    }
}

int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    selection(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}