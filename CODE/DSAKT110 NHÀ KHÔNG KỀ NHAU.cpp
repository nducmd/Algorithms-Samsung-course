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
        int i;
        for (i = 1; i <= n; i++) cin >> v[i];
        vector <long> f(n+1);
        f[0] = 0;
        f[1] = v[1];
        f[2] = v[2];
        long res = max(f[1], f[2]);
        for (i = 3; i <= n; i++)
        {
            f[i] = max(f[i-2], f[i-3]) + v[i];
            res = max(res, f[i]);
        }
           cout << res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
