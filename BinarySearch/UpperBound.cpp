    // Problem: Upper Bound

    #include<bits/stdc++.h>
    using namespace std;
    void upperbound(vector<int> &arr,int n,int target)
    {
        int targetindex=n;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>target)
            {
                targetindex=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        cout<<"Upper Bound Index : "<<targetindex;
    }
    int main()
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        int target;
        cin>>target;
        upperbound(arr,n,target);
    }
