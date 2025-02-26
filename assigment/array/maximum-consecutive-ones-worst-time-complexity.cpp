#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums)
{
    int max = 0;
    int count = 0;

    for (int i : nums)
    {
        if (i == 1)
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 0;
        }
    }
    if (max < count)
    {
        max = count;
    }
    return max;
}
int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << maxConsecutive(nums);
}