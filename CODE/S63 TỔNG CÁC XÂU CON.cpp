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
        s = "@" + s;
        int len = s.length();
        vector <long long> f(len+1);
        f[1] = 0;
        unsigned long long res = 0;
        for (int i = 1; i < len; i++)
        {
            int tmp = s[i] - 48;
            for (int j = 1; j <= i; j++)
            {
                f[j] = f[j] * 10 + tmp;
                res += f[j];
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
