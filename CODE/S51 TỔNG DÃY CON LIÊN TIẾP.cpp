#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n+1);
        vector <long> s(n+1,0);
        int i, j;
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
            s[i] = s[i-1] + v[i];
        }
        for (i = 1; i <= n; i++)
        {
            if (s[n] % s[i] == 0)
            {
                j = i + 1;
                int cnt = 1;
                long tmp = 0;
                while (tmp < s[i] && j <= n)
                {
                    tmp += v[j];
                    if (tmp == s[i])
                    {
                        tmp = 0;
                        cnt++;
                    }
                    j++;
                }
                if (cnt == (s[n] / s[i])) break;
            }
        }
        cout << s[i] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
