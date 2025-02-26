#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
        return 0; // Already at the last index
    if (arr[0] == 0)
        return -1; // Can't move from the first position

    int jumps = 1, farthest = arr[0], end = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps; // Reached the last index

        farthest = max(farthest, i + arr[i]); // Update the farthest reach

        if (i == end)
        { // Need to jump
            jumps++;
            end = farthest;

            if (end <= i)
                return -1; // Can't move forward
        }
    }

    return -1; // If we never reach the last index
}

int main()
{
    vector<int> arr = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    cout << minJumps(arr) << endl; // Output: 9 (N-1 jumps)
    return 0;
}
