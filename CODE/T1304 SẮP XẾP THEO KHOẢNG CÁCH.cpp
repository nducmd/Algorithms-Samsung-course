#include <bits/stdc++.h>

using namespace std;
int x;
int cmp(int y, int yy)
{
    return abs(y-x) < abs(yy-x);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (auto y : v) cout << y << " ";
        cout << endl;
    }
    return 0;
}
