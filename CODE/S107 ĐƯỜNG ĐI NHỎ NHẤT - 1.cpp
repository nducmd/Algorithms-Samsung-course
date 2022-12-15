#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1] = {};
        int f[n+1][m+1] = {};
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (i = 0; i <= m; i++) f[0][i] = INF;
        for (i = 0; i <= n; i++) f[i][0] = INF;
        f[0][0] = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                f[i][j] = min({f[i-1][j-1], f[i-1][j], f[i][j-1]}) + a[i][j];
            }
        }
        cout << f[n][m] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
