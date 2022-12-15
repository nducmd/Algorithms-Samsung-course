#include <bits/stdc++.h>

using namespace std;
string low(string s)
{
    for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
    return s;
}
int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    string tmp;
    map <string, int> mp;
    set <string> s;
    stringstream ss(s1);
    while (ss >> tmp)
    {
        tmp = low(tmp);
        s.insert(tmp);
        mp[tmp] =1;
    }
    stringstream sss(s2);
    while (sss >> tmp)
    {
        tmp = low(tmp);
        s.insert(tmp);
        if (mp[tmp]==1) mp[tmp] = 2;
    }
    for (auto x : s) cout << x << " ";
    cout << endl;
    for (auto x : mp) if (x.second == 2) cout << x.first << " ";
    return 0;
}
