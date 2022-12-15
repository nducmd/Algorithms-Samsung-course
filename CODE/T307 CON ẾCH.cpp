#include <bits/stdc++.h>
using namespace std;
long long f[52];
void init()
{
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for (int i = 4; i < 52; i++)
        f[i] = f[i-1] + f[i-2] + f[i-3];
}
void Run()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
