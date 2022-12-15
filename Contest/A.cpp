#include <bits/stdc++.h>

using namespace std;
const int M = 10e6;
vector <bool> P(M,true);
void cret()
{
    P[0] = P[1] = false;
    for (int i = 4; i < M; i+=2) P[i] = false;
    for (int i = 3; i < sqrt(M); i+=2)
    {
        if (P[i])
            for (int j = i*i; j < M; j+=i) P[j] = false;
    }
}
int check(int n)
{
    int curr = n % 10;
    n = n /10;
    while (n)
    {
        if (n % 10 > curr) return 0;
        n = n/10;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    cret();
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (P[i] && check(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl << cnt;
    return 0;
}
