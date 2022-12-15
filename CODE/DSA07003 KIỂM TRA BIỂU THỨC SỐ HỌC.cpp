#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
    stack <char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') st.push(s[i]);
        else if (s[i] == '(') st.push('(');
        else if (s[i] == ')')
        {
            if (st.empty()) return 0;
            if (st.top() == '(') return 0;
            while (!st.empty() && st.top() != '(')
                    st.pop();
            if (!st.empty()) st.pop();
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if (check(s) == 1) cout << "No";
        else cout << "Yes";
        cout << endl;
    }
    return 0;
}
