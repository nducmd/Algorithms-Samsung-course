#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector <int> l(n);
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i]) tmp = max(l[j], tmp);
        }
        l[i] = tmp + 1;
        res = max(res, l[i]);
    }
    cout << res << endl;
}
int main()
{
    Run();
    return 0;
}
