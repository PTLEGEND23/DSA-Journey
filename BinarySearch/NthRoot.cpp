// Problem: Nth Root

#include <bits/stdc++.h>
using namespace std;
void squareroot(long long nroot, long long n)
{
    long long ncount = nroot;
    long long low = 1;
    long long high = n - 1;
    long long x = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long midroot = 1;
        while (ncount != 0)
        {
            if (midroot > n / mid)
            {
                midroot = n + 1;
                break;
            }
            midroot *= mid;
            ncount--;
        }
        ncount = nroot;
        if (midroot == n)
        {
            x = mid;
            break;
        }
        else if (midroot < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << nroot << " root of " << n << " : " << x;
}
int main()
{
    long long nroot;
    cin >> nroot;
    long long n;
    cin >> n;
    squareroot(nroot, n);
}
