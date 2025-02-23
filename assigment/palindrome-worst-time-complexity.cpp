#include <bits/stdc++.h>
using namespace std;

int Palindrom(int x)
{
    string number_string = to_string(x);
    reverse(number_string.begin(), number_string.end());
    return (number_string == to_string(x));
}
int main()
{
    int a;
    cin >> a;
    cout << Palindrom(a);
}