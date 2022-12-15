#include <bits/stdc++.h>

using namespace std;
bool Next(string &s)
{
    int n = s.length() -1;
    while (n > -1 && s[n] == '0')
    {
        s[n] = '1';
        n--;
    }
    if (n < 0) return false;
    else
    {
        s[n] = '0';
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Next(s);
        cout << s << endl;
    }
    return 0;
}
