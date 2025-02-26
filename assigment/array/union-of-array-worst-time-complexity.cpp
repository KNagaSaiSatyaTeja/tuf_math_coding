#include <bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int> a, vector<int> b)
{
    vector<int> u;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            u.push_back(a[i]);
            i++;
        }
        if (a[i] > b[j])
        {
            u.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size())
        u.push_back(a[i++]);
    while (j < b.size())
        u.push_back(b[j++]);
    u.erase(unique(u.begin(), u.end()), u.end());
    return u;
}

int main()
{
    vector<int> array1 = {};
    vector<int> array2 = {};
    vector<int> unionarray = Union(array1, array2);
    for (auto i : unionarray)
        cout << i << " ";
}