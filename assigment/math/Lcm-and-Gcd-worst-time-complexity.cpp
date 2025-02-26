#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b); // Recursive GCD function
}

std::vector<int> lcmAndGcd(int a, int b)
{
    std::vector<int> lcmandGcd; // Fixed typo (vector<int>)

    int gcdValue = gcd(a, b);          // Avoid function-variable name conflict
    int lcmValue = (a / gcdValue) * b; // Correct LCM formula

    lcmandGcd.push_back(gcdValue);
    lcmandGcd.push_back(lcmValue);

    return lcmandGcd;
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
