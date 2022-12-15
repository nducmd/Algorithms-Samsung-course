#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long s = 0, m = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m = m * i;
        s += m;
    }
    cout << s;
    return 0;
}
