#include <iostream>
#include <vector>
using namespace std;

// Optimized GCD using Euclidean Algorithm (O(log N))
int gcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

// LCM using GCD (O(log N))
vector<int> lcmAndGcd(int a, int b)
{
    int gcdValue = gcd(a, b);          // O(log N)
    int lcmValue = (a / gcdValue) * b; // O(1), prevents overflow

    return {gcdValue, lcmValue}; // Return vector with {GCD, LCM}
}

int main()
{

    int a, b;
    cin >> a >> b;

    vector<int> result = lcmAndGcd(a, b);
    cout << "GCD: " << result[0] << "\n";
    cout << "LCM: " << result[1] << "\n";

    return 0;
}
