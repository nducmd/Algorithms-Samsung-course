#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue <int> qu;
    while (t--)
    {
        int func, tmp;
        string s;
        cin >> s;
        if (s == "PUSH") func = 1;
        else if (s == "POP") func = 2;
        else func = 3;
        switch (func)
        {
            case 1 : cin >>  tmp; qu.push(tmp); break;
            case 2 : if (!qu.empty()) qu.pop(); break;
            case 3 : (qu.empty()) ? cout << "NONE" : cout << qu.front(); cout << endl; break;
        }
    }
    return 0;
}
