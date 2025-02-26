#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false; // Negative & trailing zeros are not palindromes

    int reversedHalf = 0;
    while (x > reversedHalf)
    {
        reversedHalf = reversedHalf * 10 + x % 10; // Build reversed half
        x /= 10;                                   // Reduce original number
    }

    return (x == reversedHalf || x == reversedHalf / 10); // Check for even & odd length cases
}

int main()
{
    int a;

    cin >> a;
    cout << isPalindrome(a);
    return 0;
}
