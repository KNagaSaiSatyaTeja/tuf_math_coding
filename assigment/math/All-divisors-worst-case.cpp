#include <bits/stdc++.h>
using namespace std;

int divisor(int i)
{
    vector<int> divisors;
    for (int j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            divisors.push_back(j);
        }
    }
    return accumulate(divisors.begin(), divisors.end(), 0);
}
int main()
{
    // Write Your Code here
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += divisor(i);
    }
    cout << sum;
}