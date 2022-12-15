#include <bits/stdc++.h>
using namespace std;
const long mod = 1e9 + 7;
long long C[1005][1005];
void init()
{
    C[0][0] = 1;
    for (int i = 0; i < 1005; i++)
    {
        C[i][i] = 1;
        C[i][0] = 1;
        for (int j = 1; j < i; j++)
            C[i][j] = ((C[i-1][j-1] % mod) + (C[i-1][j] % mod)) % mod;
    }
}
void Run()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
