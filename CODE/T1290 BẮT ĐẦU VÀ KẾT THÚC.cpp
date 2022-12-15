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
        getline(cin,s);
        if (s[0] == s.back()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
