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
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector <long> l(n);
        long res = 0;
        for (int i = 0; i < n; i++)
        {
            long tmp = 0;
            for (int j = 0; j < i; j++)
            {
                if (v[j] <= v[i]) tmp = max(tmp, l[j]);
            }
            l[i] = tmp + 1;
            res = max(res, l[i]);
        }
        cout << n - res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
