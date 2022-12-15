#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        int i, j;
        vector <int> a(n+1);
        vector <int> c(n+1);
        for (i = 1; i <= n; i++) cin >> a[i];
        for (i = 1; i <= n; i++) cin >> c[i];
        int f[n+1][v+1] = {};
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= v; j++)
            {
                if (j >= a[i]) f[i][j] = max(f[i-1][j], f[i-1][j-a[i]] + c[i]);
                else f[i][j] = f[i-1][j];
            }
        }
        cout << f[n][v] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
