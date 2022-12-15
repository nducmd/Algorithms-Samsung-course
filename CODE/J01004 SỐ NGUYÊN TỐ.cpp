#include <bits/stdc++.h>

using namespace std;
int isPrime(int n)
{
    int i;
    if (n < 2) return 0;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i+=2)
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        (isPrime(n)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
