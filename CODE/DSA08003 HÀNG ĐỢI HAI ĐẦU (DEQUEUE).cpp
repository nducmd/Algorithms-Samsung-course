#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    deque <int> dq;
    while (t--)
    {
        string s;
        cin >> s;
        int func, tmp;
        if (s == "PUSHFRONT") func = 1;
        else if (s == "PRINTFRONT") func = 2;
        else if (s == "POPFRONT") func = 3;
        else if (s == "PUSHBACK") func = 4;
        else if (s == "PRINTBACK") func = 5;
        else func = 6;
        switch (func)
        {
            case 1: cin >> tmp; dq.push_front(tmp); break;
            case 2: (dq.empty()) ? cout << "NONE" : cout << dq.front(); cout << endl; break;
            case 3: if (!dq.empty()) dq.pop_front(); break;
            case 4: cin >> tmp; dq.push_back(tmp); break;
            case 5: (dq.empty()) ? cout << "NONE" : cout << dq.back(); cout << endl; break;
            case 6: if (!dq.empty()) dq.pop_back(); break;
        }
    }
    return 0;
}
