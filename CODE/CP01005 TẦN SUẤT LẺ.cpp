#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        map <long, int> mp;
        long tmp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            mp[tmp]++;
        }
        for (auto x : mp)
        {
            if (x.second % 2 == 1)
            {
                cout << x.first << endl;
                break;
            }
        }
    }
}
int main()
{
    Run();
    return 0;
}
