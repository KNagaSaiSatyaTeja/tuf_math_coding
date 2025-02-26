#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
}
int main()
{
    vector<int> a = {3, 4, 5, 1, 2};
    cout << is_sorted(a);
}