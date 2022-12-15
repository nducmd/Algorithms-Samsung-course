#include <iostream>

using namespace std;
long sep(long n)
{
    long res = 0;
    while (n > 0)
    {
        res = res + (n%10);
        n = n/10;
    }
    return res;
}
int isPrime(long n)
{
    int i;
    if (n<2) return 0;
    for (i=2; i*i<=n; i++) if (n % i == 0) return 0;
    return 1;
}
void proc(long n)
{
    if (isPrime(n)) cout << "NO";
    else
    {
        int i = 2;
        long m = sep(n);
        long sum = 0;
        while (n%2==0)
        {
            sum = sum +2;
            n = n/2;
        }
        for (i=3; i*i<=n; i+=2)
        {
            while (n%i==0)
            {
                sum = sum + sep(i);
                n = n/i;
            }
        }
        if (n>2) sum = sum +sep(n);
        if (sum == m) cout << "YES";else cout << "NO";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        proc(n);
    }
    return 0;
}
