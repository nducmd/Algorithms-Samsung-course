#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int i = 2, res = 2;
        while (n % i == 0) n /= i;
        for (i = 3; i <= sqrt(n); i+=2)
        {
            while (n % i == 0)
            {
                n /= i;
                res = max(res,i);
            }
        }
        (n < res) ? cout << res : cout << n;
        cout << endl;
    }
    return 0;
}
