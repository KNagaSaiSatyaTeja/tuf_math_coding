#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > a[(i + 1) % a.size()])
            count++;
        if (count > 1)
            return false;
    }
    return true;
}
int main()
{
    vector<int> a = {3, 4, 5, 1, 2};
    cout << is_sorted(a);
}