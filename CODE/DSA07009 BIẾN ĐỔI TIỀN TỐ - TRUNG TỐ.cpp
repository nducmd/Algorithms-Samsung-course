#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack <string> st;
        reverse(s.begin(), s.end());
        for (auto x : s)
        {
            if (isalpha(x))
            {
                string tmp = "";
                tmp += x;
                st.push(tmp);
            }
            else{
                string tmp;
                tmp = "(" + st.top() + x;
                st.pop();
                tmp = tmp + st.top() + ")";
                st.pop();
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
