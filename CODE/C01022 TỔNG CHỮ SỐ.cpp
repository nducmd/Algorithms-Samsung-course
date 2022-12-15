#include <bits/stdc++.h>
using namespace std;
void Run()
{
    long long n;
    long long sum;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
}
int main()
{
    Run();
    return 0;
}
