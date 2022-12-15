#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int d = 0;
    int flag;
    int m;
    for (int i = 0; i < n-1; i++)
    {
        m = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[m]) m = j;
            d++;
            swap(v[i], v[m]);
            cout << "Buoc " << d << ": ";
            for (auto x : v) cout << x << " ";
            cout << endl;
    }
    return 0;
}
