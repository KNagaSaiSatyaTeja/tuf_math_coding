#include <bits/stdc++.h>
using namespace std;

int armstrom(int a)
{
    string string_number = to_string(a);
    int len = string_number.length();
    int num = 0;

    while (a > 0)
    {
        num += num * 10 + pow((a % 10), len);

        a /= 10;
    }
    return num = a;
}

int main()
{
    int a;
    cin >> a;
    cout << armstrom(a);
}