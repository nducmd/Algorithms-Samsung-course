#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n+1);
    vector <double> f(n+1);
    f[0] = 0;
    for (int i = 1; i <=n; i++)
    {
        cin >> v[i];
        f[i] = f[i-1] + v[i];
    }
    double m = 0;
    map<int,double> mp;
    for (int k = 1; k <= n-2; k++)
    {
         if (m <=(f[n] - f[k])/(n-k))
         {
             m = (f[n] - f[k])/(n-k);
             mp[k] = m;
         }
    }
    for (auto x : mp)
        if (x.second == m) cout << x.first << " ";
    return 0;
}
