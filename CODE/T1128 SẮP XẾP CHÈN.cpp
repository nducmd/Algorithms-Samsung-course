#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    int d = 0;
    int flag;
    int m,j;
    for (int i = 1; i <= n; i++)
    {
        m = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > m)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = m;
        d++;
        cout << "Buoc " << d-1 << ": ";
        for (int x = 1; x <= i; x++) cout << v[x] << " ";
        cout << endl;
    }
    return 0;
}
