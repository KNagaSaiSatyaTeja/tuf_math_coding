#include <bits/stdc++.h> //include all the header files
using namespace std;

int reverse(int x)
{
    if (x > -10 && x < 10) // if single value return x ;

        return x;

    long reversed = 0;

    while (x != 0)
    {
        int digit = x % 10;                                                     // getting last digit
        x /= 10;                                                                // removing last digit
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) // checking for range for max integer
            return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) // checking for range for min integer
            return 0;

        reversed = reversed * 10 + digit;
    }

    return (int)reversed;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Reversed: " << reverse(x);

    return 0;
}
