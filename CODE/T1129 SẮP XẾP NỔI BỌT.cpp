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
    int m,j;
    for (int i = n-1; i > 0; i--)
    {
        flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] > v[j+1])
                {swap(v[j], v[j+1]);flag = 1;}
        }
        if (flag){d++;
        cout << "Buoc " << d << ": ";
        for (auto x : v) cout << x << " ";
        cout << endl;}
    }
    return 0;
}
