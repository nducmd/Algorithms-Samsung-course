#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length() - 1;
        while (n > -1 && s[n] == '1')
        {
            s[n] = '0';
            n--;
        }
        if (n >= 0) s[n] = '1';
        cout << s << endl;
    }
    return 0;
}
