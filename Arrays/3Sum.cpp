// ThreeSum

#include <bits/stdc++.h>
using namespace std;

void threesumoptimal(vector<int> &arr, int n)
{
    set<vector<int>> st;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0)
            {
                vector temp = {arr[i], arr[left], arr[right]};
                st.insert(temp);
                left++;
                right--;
            }
            else if (sum > 0)
                right--;
            else
                left++;
        }
    }
    for (auto x : st)
    {
        for (auto num : x)
            cout << num << " ";
        cout << "\n";
    }
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
    threesumoptimal(arr, n);
}
