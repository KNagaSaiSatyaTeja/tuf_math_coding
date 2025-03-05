#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0; // Edge case: empty array

    int k = 1; // Unique elements counter (first element is always unique)

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {                      // Found a new unique element
            nums[k] = nums[i]; // Move it to the correct position
            k++;
        }
    }

    return k;
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3};
    cout << removeDuplicates(a);
}