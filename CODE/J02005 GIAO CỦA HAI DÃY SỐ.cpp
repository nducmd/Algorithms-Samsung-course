#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map <int, int> mp;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        mp[tmp] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (mp[tmp] == 1) mp[tmp] = 2;
    }
    for (auto x : mp)
        if (x.second == 2) cout << x.first << " ";

    return 0;
}
