#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
    int i = s.length() -2;
    while ( i > -1 && s[i] <= s[i+1]) i--;
    if (i < 0) return 1;
    i = s.length() -2;
    while ( i > -1 && s[i] >= s[i+1]) i--;
    if (i < 0) return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
