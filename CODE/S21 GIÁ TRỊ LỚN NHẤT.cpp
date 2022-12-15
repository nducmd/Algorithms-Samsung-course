#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    long long sum = 0;
    while(n--)
    {
        cin >> x;
        if(x > 0) sum += 2*x;
    }
    cout << sum;
    return 0;
}
