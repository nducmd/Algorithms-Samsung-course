#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    int d = 0, flag = 0;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap (v[i], v[j]);
                flag = 1;
            }
        }
        if (flag == 1)
            {
                d++;
                cout << "Buoc " << d << ": ";
                for (auto x : v) cout << x << " ";
                cout << endl;
            }
    }
    return 0;
}
