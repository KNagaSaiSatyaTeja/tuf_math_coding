#include <bits/stdc++.h>

using namespace std;

int subarrays(vector<int> &arr, int k)
{
    unordered_map<int, int> prefixMap; // To store first occurrence of prefix sum
    int prefixSum = 0, maxLength = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i]; // Compute prefix sum

        // If prefix sum is exactly k, update maxLength
        if (prefixSum == k)
        {
            maxLength = i + 1;
        }

        // If (prefixSum - k) exists in map, update maxLength
        if (prefixMap.find(prefixSum - k) != prefixMap.end())
        {
            maxLength = max(maxLength, i - prefixMap[prefixSum - k]);
        }

        // Store first occurrence of prefixSum (don't update if already exists)
        if (prefixMap.find(prefixSum) == prefixMap.end())
        {
            prefixMap[prefixSum] = i;
        }
    }

    return maxLength;
}

int main()
{
    vector<int> nums = {};
    cout << subarrays(nums, 15);
}