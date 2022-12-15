#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        vector <long long> f(k+1, 0);
        for (int i = 0; i < n; i++) cin >> v[i];
        f[0] = 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i >= v[j]) f[i] = (f[i] + f[i-v[j]]) % mod;
            }
        }
        cout << f[k] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
