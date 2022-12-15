#include <bits/stdc++.h>
using namespace std;
void Run()
{
    long n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector <long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long sum1 = 0;
        long long sum2 = -1;
        for (int i = 0; i < n; i++)
        {
            sum1 += v[i];
            sum2 = max(sum1, sum2);
            sum1 = (sum1 < 0) ? 0 : sum1;
        }
        cout << sum2 << endl;
    }
}
int main()
{
    Run();
    return 0;
}
