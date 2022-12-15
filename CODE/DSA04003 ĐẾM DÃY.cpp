#include <bits/stdc++.h>
using namespace std;
const int mod = 123456789;
long long pown(long long x, long long y)
{
    if (y == 1) return x;
    else
    {
        long long tmp = pown(x, y/2);
        if (y % 2 == 0) return (tmp * tmp) % mod;
        else return (x * (tmp * tmp)%mod) % mod;
    }
}
void Run()
{
    long n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << pown(2, n-1) << endl;
    }
}
int main()
{
    Run();
    return 0;
}
