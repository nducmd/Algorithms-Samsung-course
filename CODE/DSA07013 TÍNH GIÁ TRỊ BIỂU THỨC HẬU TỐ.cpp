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
        stack <int> st;
        for (auto x : s)
        {
            if (isdigit(x))
            {
                int tmp = x - 48;
                st.push(tmp);
            }
            else{
                int t1, t2;
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                if (x == '+') st.push(t1+t2);
                else if (x == '-') st.push(t2-t1);
                else if (x == '*') st.push(t1*t2);
                else if (x == '/') st.push(t2/t1);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
