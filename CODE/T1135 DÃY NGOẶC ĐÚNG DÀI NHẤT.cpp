#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string tmp,s;
        getline(cin,s);
        stack <int> st;
        int cnt = 0;
        int res = 0;
        st.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(') st.push(i);
            else
            {
                st.pop();
                if (!st.empty())
                    res = max(res, i - st.top());
                else st.push(i);
            }
        }
        cout << res << endl;
    }
    return 0;
}
//)(()()())()(()))))
