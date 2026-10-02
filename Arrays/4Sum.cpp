// FourSum

#include <bits/stdc++.h>
using namespace std;

void foursumoptimal(vector<int> &arr, int n, int target)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if(i>0 && arr[i]==arr[i-1])
        continue;
        for (int j = i + 1; j < n; j++)
        {
            if(j>i+1 && arr[j]==arr[j-1])
        continue;
            int left = j + 1;
            int right = n-1;
            while (left < right)
            {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else
                {
                    vector<int> temp = {arr[i], arr[j], arr[left], arr[right]};
                    ans.push_back(temp);
                    while(left<right && arr[left]==arr[left+1])
                    left++;
                    while(left<right && arr[right]==arr[right-1])
                    right--;
                    left++;
                    right--;
                }
            }
        }
    }
    for(const auto& x:ans)
    {
        for(auto y:x)
        cout<<y<<" ";
        cout<<"\n";
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
    int target;
    cin >> target;
    foursumoptimal(arr, n, target);
}
