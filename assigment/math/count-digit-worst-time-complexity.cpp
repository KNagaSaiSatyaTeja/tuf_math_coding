#include <bits/stdc++.h>
using namespace std;

int count_digit(int n)
{

    int c = 0;
    int num = n; // Store original number to avoid modifying it
    while (num > 0)
    {
        int d = num % 10;         // GET last digit
        if (d != 0 && n % d == 0) // Check divisibility(ignoring 0)
        {
            c++;
        }
        num /= 10; // Remove last digit
    }
    return c;
}
int main()
{
    int a;
    cin >> a;
    cout << count_digit(a);
}