#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int l1, l2, i, j;
        s1 = "@" + s1;
        s2 = "@" + s2;
        l1 = s1.length();
        l2 = s2.length();
        int f[l1][l2] = {};
        for (i = 0; i < l1; i++) f[i][0] = 0;
        for (i = 0; i < l2; i++) f[0][i] = 0;
        for (i = 1; i < l1; i++)
        {
            for (j = 1; j < l2; j++)
            {
                if (s1[i] == s2[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
        cout << f[l1-1][l2-1] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
