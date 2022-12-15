#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        vector<int> vv(v[n-1]+1,0);
        for (auto x : v) vv[x] = 1;
        int cnt = 0;

        for (int i = v[0]; i <= v[n-1]; i++)
            if (vv[i] == 0) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
