#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int a)
{
    if (a < 10)
        return true; //  Best Case (O(1)) for single-digit numbers

    int original = a;
    int len = to_string(a).length();
    int num = 0;

    while (a > 0)
    {                            //  Worst Case (O(log N)) for multi-digit numbers
        num += pow(a % 10, len); // Add power of last digit
        a /= 10;                 // Remove last digit
    }

    return num == original; // Check Armstrong condition
}

int main()
{
    int a;
    cin >> a;
    cout << (isArmstrong(a) ? "Yes" : "No") << endl;
}
