#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &nums)
{
    int j = 0;
    sort(nums.begin(), nums.end());

    if (nums[0] != 0)
        return 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] + 1 != nums[j])
        {
            return nums[i] + 1;
        }
        j++;
    }

    return nums.size();
}

int main()
{
    vector<int> array = {};
    cout << missing(array);
}