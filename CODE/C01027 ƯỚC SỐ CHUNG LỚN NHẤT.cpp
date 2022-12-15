#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin >> n >> m;
        long long res = __gcd(n,m);
        cout << res << endl;
    }
}
int main()
{
    Run();
    return 0;
}
