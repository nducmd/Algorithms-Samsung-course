#include <bits/stdc++.h>

using namespace std;
string Remove(string s, int k)
{
    string res = "";
    int len = s.length();
    stack <char> st;
    st.push(s[0]);
    for (int i = 1; i < len; i++)
    {
        while (!st.empty() && k > 0 && (s[i] > st.top()))
        {
            st.pop();
            k--;
        }
        st.push(s[i]);
        if (st.size() == 1 && s[i] == '0') st.pop();
    }
    //cout << k << endl;
    while (k && !st.empty())
    {
        st.pop();
        k--;
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    if (res.length() == 0) return "0";
    return res;
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << Remove(s, k);
    return 0;
}
