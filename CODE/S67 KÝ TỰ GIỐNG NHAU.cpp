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
        int x, y, z;
        cin >> x >> y >> z;
        int i, j;
        vector <int> f(n+1);
        f[1] = x;
        for (i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
                f[i] = min(f[i-1] + x, f[i/2] + z);
            else f[i] = min({f[i-1] + x, f[i/2] + z + x, f[(i/2)+1] + z + y});
        }
        cout << f[n] << endl;

    }
}
int main()
{
    Run();
    return 0;
}
