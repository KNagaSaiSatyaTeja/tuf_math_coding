#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxvalue = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
        }
    }
    cout << maxvalue;
    return 0;
}