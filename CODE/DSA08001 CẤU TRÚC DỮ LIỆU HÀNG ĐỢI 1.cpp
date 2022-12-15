#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, func;
        cin >> n;
        queue <int> qu;
        int tmp;
        while (n--)
        {
            cin >> func;
            switch (func)
            {
                case 1: cout << qu.size() << endl; break;
                case 2: (qu.empty()) ? cout << "YES" : cout << "NO"; cout << endl; break;
                case 3: cin >> tmp; qu.push(tmp); break;
                case 4: if (!qu.empty()) qu.pop(); break;
                case 5: (qu.empty()) ? cout << -1 : cout << qu.front(); cout << endl; break;
                case 6: (qu.empty()) ? cout << -1 : cout << qu.back(); cout << endl; break;
            }
        }
    }
    return 0;
}
