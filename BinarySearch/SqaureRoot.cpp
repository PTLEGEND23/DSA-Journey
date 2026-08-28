// Problem: Sqaure Root

#include <bits/stdc++.h>
using namespace std;
void squareroot(int n)
{
    long long sqrt=0;
    long long low=0;
    long long high=n-1;
    while(low<=high)
    {
        long long mid=low+(high-low)/2;
        if(mid*mid<=n)
        {
            sqrt=mid;
            low=mid+1;
        }
        else
        high=mid-1;
    }
    cout<<"Square root of "<<n<<" : "<<sqrt;
}
int main()
{
    long long n;
    cin >> n;
    squareroot(n);
}
