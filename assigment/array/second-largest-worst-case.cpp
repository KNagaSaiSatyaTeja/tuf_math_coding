#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {12, 35, 1, 10, 34, 1};
    sort(a.begin(), a.end());
    if (a.size() > 2)
    {
        cout << a[a.size() - 2];
    }
    else
    {
        cout << a[0];
    }
}
