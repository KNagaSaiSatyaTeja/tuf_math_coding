#include <bits/stdc++.h>
using namespace std;

// Precompute sum of divisors using a more efficient approach
int sumOfDivisors(int n)
{
    vector<int> sumDiv(n + 1, 0);

    // Loop through all numbers and add them to their multiples
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            sumDiv[j] += i;
        }
    }

    return accumulate(sumDiv.begin(), sumDiv.end(), 0);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDivisors(n) << endl;
}
