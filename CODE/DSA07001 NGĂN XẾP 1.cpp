#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int tmp,fun;
    stack <int> st;
    while (cin >> s)
    {
        if (s == "push") fun = 1;
        else if (s == "pop") fun = 2;
        else fun = 3;
        switch(fun)
        {
            case 1:
            {
                cin >> tmp;
                st.push(tmp);
                break;
            }
            case 2:
            {
                if (!st.empty()) st.pop();
                break;
            }
            case 3:
            {
                if (st.empty()) cout << "empty";
                else{
                    stack <int> st1;
                    while (!st.empty())
                    {
                        st1.push(st.top());
                        st.pop();
                    }
                    while (!st1.empty())
                    {
                        st.push(st1.top());
                        cout << st1.top() << " ";
                        st1.pop();
                    }
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
