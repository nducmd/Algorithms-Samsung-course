#include <bits/stdc++.h>
using namespace std;

void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        int i,j;
        cin >> n >> m;
        int a[505][505];
        int f[505][505];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++) cin >> a[i][j];

        for (i = 0; i < n; i++) f[0][i] = a[0][i];
        for (i = 0; i < m; i++) f[i][0] = a[i][0];

        int res = 0;
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    f[i][j] = min({f[i-1][j-1], f[i-1][j], f[i][j-1]}) + 1;
                    res = max(res, f[i][j]);
                }
                else f[i][j] = 0;
            }
        }
        cout << res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
