#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a >> b;
        long long m = __gcd(a,b);
        cout << a*b / m << " " << m << endl;
    }
    return 0;
}
