#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        int flag = 0;
        vector <long> v(n);
        int i,j = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            if (k == v[i]) flag = 1;
        }
        if (flag == 0 && k == 0) k = -1;

        long long sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum >= k) break;
        }
        if (sum == k) flag = 1;
        else
        {
            i++;
            for (; i < n; i++)
            {
                while (sum > k && j < i)
                {
                    sum -= v[j];
                    j++;
                }
                if (sum == k) break;
                sum += v[i];
            }
            while (sum > k && j < i)
            {
                sum -= v[j];
                j++;
            }
        }
        if (sum == k) flag = 1;
        if (flag) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
