#include <bits/stdc++.h>

using namespace std;
void Try(int k, vector <int>  &v, vector <int> &d, int j)
{
    for (int i = j; i < v.size() - k + j; i++)
    {
        if (d[j-1] < v[i])
        {
            d[j] = v[i];
            if (j == k)
            {
                for (int x = 1; x <= k; x++) cout << d[x] << " ";
                cout << endl;
            }
            else Try(k, v, d, j+1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector <int> v(n+1);
        for (int i = 1; i <= n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        vector <int> d(k+1,0);
        Try(k, v, d, 1);
    }
    return 0;
}
