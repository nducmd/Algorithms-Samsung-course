#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,tmp;
        cin >> n >> k;
        map <int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            mp[tmp] = i+1;
        }
        if (mp[k]) cout << mp[k];
        else cout << "NO";
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
