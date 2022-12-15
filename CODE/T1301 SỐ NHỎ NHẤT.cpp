#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        if (d*9 < s)cout << -1 << endl;
        else
        {
            stack <int> st;
            int m = 9;
            while (d)
            {
                st.push(min(m,s));
                s = s - st.top();
                while (s <= 0 && d > 1)
                {
                    int tmp = st.top();
                    st.pop();
                    tmp--;
                    s++;
                    st.push(tmp);
                }
                d--;
            }
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
