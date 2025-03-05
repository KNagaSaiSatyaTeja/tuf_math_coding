#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    set<int> s(nums.begin(), nums.end());
    return s.size();
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3};
    cout << removeDuplicates(a);
}