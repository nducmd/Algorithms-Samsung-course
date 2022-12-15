#include <bits/stdc++.h>

using namespace std;
map<unsigned long long, bool> mp;
void cret()
{
    for (long long i = 1; i < 100000; i++)
    {
        mp[i*i*i] = true;
    }
}
bool Next(vector <int> &v)
{
    int n = v.size() -1;
    while (n > -1 && v[n] == 1)
    {
        v[n] = 0;
        n--;
    }
    if (n < 0) return false;
    else
    {
        v[n] = 1;
        return true;
    }
}
int main()
{
    int t;
    cret();
    cin >> t;
    while (t--)
    {
        string s;
        long long res = -1;
        cin >> s;
        vector <int> v(s.length(), 0);
        long long x = 0;
        do
        {
            //for (auto y : v) cout << y << " " ;cout << endl;
            x = 0;
            for (int i = 0; i < s.length(); i++)
                if (v[i]) x = x * 10 + (s[i] - '0');
            if (x!= 0 && mp[x]) res = max(res,x);
        }while (Next(v));
        cout << res << endl;
    }
    return 0;
}
