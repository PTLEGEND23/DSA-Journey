// Koko Bananan

#include <bits/stdc++.h>
using namespace std;

int kokobananabrute(vector<int> &arr, int n, int h)
{
    int k = 1;
    while (true)
    {
        long long tc = 0;
        for (int i = 0; i < n; i++)
        {
            tc += (arr[i] + k - 1) / k;
        }
        if (tc <= h)
            return k;
        else
            k++;
    }
}

long long calculatehour(vector<int> &arr, int n, int mid)
{
    long long tc = 0;
    for (int i = 0; i < n; i++)
    {
        tc += (arr[i] + mid - 1) / mid;
    }
    return tc;
}
int kokobanana(vector<int> &arr, int n, int h)
{
    int result = -1;
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (calculatehour(arr, n, mid) <= h)
        {
            result = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int h;
    cin >> h;
    cout << (kokobanana(arr, n, h));
}
