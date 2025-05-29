
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int r, int mid)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + i + 1];
    int k = l, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(vector<int> &arr, int l, int r)
{
    // code here
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, r, m);
    }
}
int main()
{
    vector<int> nums = {7, 4, 1, 2, 9};
    mergeSort(nums, 0, nums.size() - 1);
    for (auto i : nums)
    {
        cout << i << " ";
    }
}