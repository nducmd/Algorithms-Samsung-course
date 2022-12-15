#include <bits/stdc++.h>
using namespace std;
int isPrime(long n)
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
vector <int> v(1000000,0);
void proc()
{
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i*i < 1000000; i++)
    {
        if (v[i] == 0)
            for (int j = i+i; j < 1000000; j+=i)
                v[j] = 1;
    }
}
void Run()
{
    long n;
    int t;
    cin >> t;
    proc();
    while (t--)
    {
        cin >> n;
        int flag = 0;
        for (int i = 2; i <= (n/2); i++)
        {
            if (v[i] == 0 && v[n-i] == 0)
            {
                flag = 1;
                cout << i << " " << n-i;
                break;
            }
        }
        if (!flag) cout << -1;
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
