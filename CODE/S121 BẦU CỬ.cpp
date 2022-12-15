#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;
    map <int, int> mp1, mp2;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        mp1[tmp]++;
    }
    for (auto x : mp1)  mp2[x.second] = x.first;
    if (mp2.size() < 2) cout << "NONE" << endl;
        else
        {
            auto it = mp2.end();
            it--;
            it--;
            cout << it->second << endl;
        }
    return 0;
}
