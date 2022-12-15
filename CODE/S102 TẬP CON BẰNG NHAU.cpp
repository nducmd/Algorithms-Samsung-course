#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        long s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s += v[i];
        }
        if (s % 2 == 1) cout << "NO";
        else
        {
            s = s / 2;
            vector <int> l(s+1, 0);
            l[0] = 1;
            for(int i = 0; i < n; i++)
            {
                for (int j = s; j >= v[i]; j--)
                    if (l[j] == 0 && l[j - v[i]] == 1) l[j] = 1;
            }
            if (l[s]) cout << "YES"; else cout << "NO";
        }
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
