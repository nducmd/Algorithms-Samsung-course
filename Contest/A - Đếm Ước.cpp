#include <bits/stdc++.h>

using namespace std;
const int M = 1000001;
int p[M];
void Init()
{
    for (int i = 0; i < M; i++) p[i] = i;
    for (int i = 2; i * i < M; i++)
    {
        if (p[i] == i)
        {
            for (int j = i * i; j < M; j+= i)
                p[j] = i;
        }
    }
}
int main()
{
    Init();
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        long long cnt1 = 1, cnt2 = 1;
        map <int, int> ma;
        int n = m;
        while (n-1)
        {
            ma[p[n]]++;
            n = n / p[n];
        }
        n = m + 1;
        while (n-1)
        {
            ma[p[n]]++;
            n = n / p[n];
        }
        n = m + 2;
        while (n-1)
        {
            ma[p[n]]++;
            n = n / p[n];
        }
        for (auto x : ma)
        {
            cnt1 *= (x.second + 1);
            cnt2 *= (x.second * 2 + 1);
        }
        cout << (cnt2 + 1) / 2 - cnt1 << endl;
    }
    return 0;
}
