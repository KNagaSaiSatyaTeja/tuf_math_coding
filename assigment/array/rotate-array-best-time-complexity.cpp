#include <bits/stdc++.h>
using namespace std;

void rotate_array(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    rotate(nums.begin(), nums.begin() + (n - k), nums.end());
}

int main()
{
    vector<int> a = {1, 2, 3, 3, 4, 6};
    rotate_array(a, 3);
}