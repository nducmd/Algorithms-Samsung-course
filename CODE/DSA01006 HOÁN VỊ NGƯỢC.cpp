#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        for (int i = n; i > 0; i--)
            s = s + to_string(i);
        cout << s << " ";
        
        while (prev_permutation(s.begin(),s.end()))
            cout << s << " ";
        cout << endl;
    }
}
int main()
{
    Run();
    return 0;
}
