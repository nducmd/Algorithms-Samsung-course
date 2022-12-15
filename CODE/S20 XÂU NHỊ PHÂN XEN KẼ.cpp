#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {0,1};
    int n;
    cin >> n;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[(i+j) % 2] << " ";
        cout << endl;
    }
    return 0;
}
