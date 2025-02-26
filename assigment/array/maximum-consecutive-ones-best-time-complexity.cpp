#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums)
{
    int maxCount = 0, currentCount = 0;
    for (int num : nums)
    {
        currentCount = (num == 1) ? currentCount + 1 : 0;
        maxCount = max(maxCount, currentCount);
    }
    return maxCount;
}
int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << maxConsecutive(nums);
}