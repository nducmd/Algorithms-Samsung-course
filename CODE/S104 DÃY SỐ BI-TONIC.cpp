#include <bits/stdc++.h>
using namespace std;
long countSum(vector <int> v)
{
    int n = v.size(), i, j;
    if (n == 0) return 0;
    long sum, tmp, s[n];
    s[0] = v[0];
    sum = s[0];
    for (i = 1; i < n; i++)
    {
        tmp = v[i];
        for (j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                tmp = max(tmp, s[j] + v[i]);
            }
        }
        s[i] = tmp;
        sum = max(sum, s[i]);
    }
    return sum;
}
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        vector <int> v(n);
        int m = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long res = 0;
        for (m = 0; m < n; m++)
        {
            vector <int> v1, v2;
            for (i = 0; i <= m; i++)
                if (v[i] <= v[m]) v1.push_back(v[i]);
            for (i = n-1; i > m; i--)
                if (v[i] < v[m]) v2.push_back(v[i]);
            res = max(res,countSum(v1) + countSum(v2));
        }
        cout << res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
