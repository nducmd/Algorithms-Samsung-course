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
        for (int i = 0; i < n; i++) cin >> v[i];
        long s1, s2;
        s1 = 0;
        s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s1 += v[i];
            s2 = max(s2, s1);
            if (s1 < 0) s1 = 0;
        }
        cout << s2 << endl;
    }
}
int main()
{
    Run();
    return 0;
}
