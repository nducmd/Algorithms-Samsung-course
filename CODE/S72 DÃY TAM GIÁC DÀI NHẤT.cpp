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
        int i, j;
        int res = 0;
        for (i = 0; i < n; i++) cin >> v[i];
        for (i = 0; i < n; i++)
        {
            j = i - 1;
            int pivot = v[i];
            int cnt = 1;
            while (j >= 0 && v[j] < pivot)
            {
                cnt++;
                pivot = v[j];
                j--;
            }
            j = i + 1;
            pivot = v[i];
            while (j < n && v[j] < pivot)
            {
                cnt++;
                pivot = v[j];
                j++;
            }
            res = max(res ,cnt);
        }
        cout << res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
