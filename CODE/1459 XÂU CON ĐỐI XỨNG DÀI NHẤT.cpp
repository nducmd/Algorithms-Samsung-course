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
        int f[n][n];
        int i,j,k;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++) f[i][j] = 0;
        }
        for (i = 0; i < n; i++) f[i][i] = 1;
        int res = 1;
        //xau do dai 2
        for (i = 0; i < n-1; i++)
            if (s[i] == s[i+1])
            {
                f[i][i+1] = 1;
                res = 2;
            }

        for (k = 2; k < n; k++)
        {
            for (i = 0; i < n; i++)
            {
                j = i + k;
                if (s[i] == s[j] && f[i+1][j-1])
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
