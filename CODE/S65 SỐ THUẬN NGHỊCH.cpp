#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int f[n][n] = {};
        int i, j, k;
        int res = 1;
        for (i = 0; i < n; i++) f[i][i] = 1;
        for (i = 1; i < n; i++)
        if (s[i-1] == s[i])
        {
            f[i-1][i] = 1;
            res = 2;
        }
        for (k = 2; k <= n; k++)
        {
            for (i = 0; i < n; i++)
            {
                j = i + k;
                if (s[j] == s[i] && f[i+1][j-1])
                {
                    f[i][j] = 1;
                    res = max(res, k+1);
                }
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
