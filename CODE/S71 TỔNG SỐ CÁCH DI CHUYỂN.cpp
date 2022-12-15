#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
unsigned long long f[100002];
void countWays(int n, int k)
{
    int i, j;
    if (k > n) k = n;
    fill(f, f+n+1, 0);
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= k; i++)
    {
        f[i] = 1;
        for (j = 1; j < i; j++)
            f[i] = (f[i] + f[j]) % mod;
    }
    for (i = k+1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
            f[i] = (f[i] + f[i-j]) % mod;
    }
    cout << f[n] << endl;
}
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        countWays(n, k);
    }
}
int main()
{
    Run();
    return 0;
}
