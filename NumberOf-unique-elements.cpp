#include <bits/stdc++.h>
using namespace std;

int numberOfUnique(vector<int> &nums)
{
    set<int> s(nums.begin(), nums.end());

    return s.size();
}
int main()
{
    vector<int> a = {1, 1, 2};
    cout << numberOfUnique(a);
}