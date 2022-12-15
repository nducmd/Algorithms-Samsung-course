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
        vector <int> a(n), b(n);
        int res = -1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++)
        {
            cin >> b[i];
            if (res == -1)
                res = (b[i] != a[i]) ? i : res;
        }
        cout << res + 1 << endl;
    }
}
int main()
{
    Run();
    return 0;
}
