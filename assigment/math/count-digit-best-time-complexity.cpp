#include <bits/stdc++.h>
using namespace std;

int count_digit(int n)
{

    int c = 0;
    int num = n;
    while (n > 0)
    {
        int d = n % 10;             // getting last digit
        if (d != 0 && num % d == 0) // Check divisibility(ignoring 0)
        {
            c++;
        }
        n /= 10; // Reduce the number by removing last digit
    }
    return c;
}
int main()
{
    int a;
    cin >> a;
    cout << count_digit(a);
}