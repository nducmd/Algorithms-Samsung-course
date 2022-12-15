#include <bits/stdc++.h>
using namespace std;
int isSymmetric(int n)
{
    int a = n;
    int b = 0;
    while (n)
    {
        b = b * 10 + (n % 10);
        n /= 10;
    }
    return (a == b) ? 1 : 0;
}
int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
void Run()
{
    int a,b;
    int t;
    cin >> t;
    int cnt;
    while (t--)
    {
        cin >> a >> b;
        cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i) && isSymmetric(i))
            {
                cnt++;
                cout << i << " ";
            }
            if (cnt == 10)
            {
                cout << endl;
                cnt = 0;
            }
        }
        cout << endl;
    }

}
int main()
{
    Run();
    return 0;
}
