#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &nums, int left, int right)
{
    while (left < right)
    {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}
void rotate_array(vector<int> &nums, int k)
{
    int n = nums.size();
    reverseArray(nums, 0, n - 1);
    reverseArray(nums, 0, k - 1);
    reverseArray(nums, k, n - 1);
}

int main()
{
    vector<int> a = {1, 2, 3, 3, 4, 6};
    rotate_array(a, 3);
}