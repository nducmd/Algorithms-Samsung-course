#include <bits/stdc++.h>
using namespace std;
/*
//  test
    12231 -> 5
    120   -> 1
    130   -> 0
    012   -> 0
    31    -> 1
*/
void Run()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        int i;
        int n = s.length();
        vector <int> f(n+1);
        if (s[0] == '0') cout << 0 << endl;
        else
        {
            f[0] = 1;
            f[1] = 1;
            for (i = 2; i <= n; i++)
            {
                if (s[i-1] > '0') f[i] = f[i-1];
                if (s[i-2] == '1' || s[i-2] == '2' && s[i-1] <= '6') f[i] += f[i-2];
            }
            cout << f[n] << endl;
        }
    }
}
int main()
{
    Run();
    return 0;
}
