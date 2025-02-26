#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int num = 0;
    while (x != 0)
    {
        int digit = x % 10; // getting last digit

        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) // checking for range for max integer
            return 0;
        if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit < -8)) // checking for range for min integer
            return 0;

        num = num * 10 + digit;
        x /= 10; // removing last digit
    }
    return num;
}
int main()
{
    int a;
    cin >> a;
    cout << reverse(a);
}