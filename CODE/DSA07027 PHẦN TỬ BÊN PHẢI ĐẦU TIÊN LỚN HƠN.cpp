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
        stack <int> st;
        for (int i = 0; i < n; i++) cin >> v[i];
        vector <int> res(n);
        for (int i = n -1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= v[i]) st.pop();
            if (st.empty()) res[i] = -1;
            else res[i] = st.top();
            st.push(v[i]);
        }
        for (auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
