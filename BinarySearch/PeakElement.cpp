// Problem: Peak Element

#include <bits/stdc++.h>
using namespace std;
void peakelement(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    int peakeleIndex = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid == 0 || arr[mid] > arr[mid - 1])
        {
            if (mid == n - 1 || arr[mid] > arr[mid + 1])
            {
                peakeleIndex = mid;
                break;
            }
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << "Peak Element Index: " << peakeleIndex;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    peakelement(arr, n);
}
