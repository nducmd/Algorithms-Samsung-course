#include <bits/stdc++.h>
using namespace std;
int isPrime(long n)
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
int isSum(long n)
{
    long m = n;
    long sum = 0;
    int tmp;
    while (m)
    {
        tmp = m % 10;
        if (!isPrime(tmp)) return 0;
        sum += tmp;
        m /= 10;
    }
    if (!isPrime(sum)) return 0;
    if (!isPrime(n)) return 0;
    return 1;
}
void Run()
{
    long a,b,cnt;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cnt = 0;
        for (long i = a; i <= b; i++)
        {
            if (isSum(i)) cnt++;
        }
        cout << cnt << endl;
    }

}
int main()
{
    Run();
    return 0;
}
