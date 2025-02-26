#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &nums)
{
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = accumulate(nums.begin(), nums.end(), 0);
    return expectedSum - actualSum;
}

int main()
{
    vector<int> array = {};
    cout << missing(array);
}