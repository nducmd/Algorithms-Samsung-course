#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s[0] + s[4] == s[8] + 48) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
