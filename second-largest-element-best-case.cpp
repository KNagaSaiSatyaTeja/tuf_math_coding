#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {12, 35, 1, 10, 34, 1};
    int max = a[0];
    int secmax = -1;
    for (auto i : a)
    {
        if (i > max)
        {
            secmax = max;
            max = i;
        }
        else if (i > secmax && i < max)
        {
            secmax = i;
        }
    }
    cout << secmax;
}