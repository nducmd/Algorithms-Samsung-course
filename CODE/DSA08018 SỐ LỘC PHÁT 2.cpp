#include <bits/stdc++.h>

using namespace std;
void proc(int n)
{
    int len = 2;
    vector <string> v;
    v.push_back("6");
    v.push_back("8");
    int i,j;
    i = 0;
    j = 0;
    while (len <= n)
    {
        i = j;
        j = v.size();
        while (v[i].length() == len - 1)
        {
            v.push_back(v[i] + "6");
            v.push_back(v[i] + "8");
            i++;
        }
        len++;
    }
    cout << v.size() << endl;
    for (auto x : v) cout << x << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        proc(n);
    }
    return 0;
}
