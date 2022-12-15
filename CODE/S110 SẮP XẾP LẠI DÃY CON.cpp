#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector <int> v(n), des(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            des[i] = v[i];
        }
        map <int, int> mp;
        int flag = 0;
        int first = 0, last = 0;
        sort(des.begin(), des.end());
        for (int i = 0; i < n; i++)
            mp[des[i]] = i;
        for (int i = 0; i < n; i++)
        {
            if (!flag && v[i] != des[i]) {first = i;flag = 1;}
            if (v[i] != des[i]) last = max(last, mp[des[i]]);
        }
        cout << first+1 << " " << last+1 << endl;
    }
    return 0;
}
