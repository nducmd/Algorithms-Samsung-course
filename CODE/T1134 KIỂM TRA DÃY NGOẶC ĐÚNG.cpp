#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
    stack <char> st;
        for (char x : s)
        {
            if (x == '(' || x == '[' || x == '{') st.push(x);
            else
            {
                if (st.empty()) return 0;
                char y = st.top();
                if ((y == '(' &&  x == ')') || (y == '{' && x == '}') || (y == '[' && x == ']')) st.pop();
                else return 0;
            }
        }
        return 1;
}
int main()
{

    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string tmp,s;
        getline(cin,s);
        if (check(s)) cout << "YES"; else cout << "NO";
        cout<< endl;
    }
    return 0;
}
