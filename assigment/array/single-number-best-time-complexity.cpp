

#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
    return result;
}
int main()
{
    vector<int> nums = {1, 2, 2, 3, 3};
    cout << singleElement(nums);
}
