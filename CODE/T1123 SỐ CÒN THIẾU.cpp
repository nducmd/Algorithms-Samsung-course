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
        v[0] = 0;
        for (int i = 1; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int i;
        for (i = 1; i < n; i++)
            if (i != v[i]) break;
        if (i >= n) cout << n << endl;
        else cout << i << endl;
    }
    return 0;
}
