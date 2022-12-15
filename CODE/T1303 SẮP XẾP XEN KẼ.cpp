#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int first = 0;
        int last = n -1;
        while (first <= last)
        {
            if (first != last) cout << v[last] << " " << v[first] << " ";
            else cout << v[first];
            first++;
            last--;
        }
        cout << endl;
    }
    return 0;
}
