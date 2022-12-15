#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int l[s+5];
        fill(l, l+s+5, 0);
        l[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = s; j >= a[i]; j--)
                if (l[j] == 0 && l[j-a[i]] == 1) l[j] = 1;
        }
        if (l[s]) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
