#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &nums, int K)
{
    int n = nums.size();
    int maxLength = 0;

    // Try all subarrays
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += nums[j]; // Add current element

            if (sum == K)
            {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    return maxLength;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 1, 4, 2};
    int K = 6;
    cout << "Longest Subarray Length: " << longestSubarrayWithSumK(nums, K) << endl;
    return 0;
}
