#include <bits/stdc++.h>

using namespace std;
bool Next(string &s, int n)
{
    int i = n-1;
    while (i >= 0 && s[i] == (n+48)) i--;
    if (i >= 0 )
    {
        s[i]++;
        i++;
        while (i < n) s[i++] = '1';
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int m = n;
    string str_start, num_start;
    for (int i = 1; i <= n; i++) num_start = num_start + '1';
    char x = 'A';
    while (m--)
    {
        str_start = str_start + x;
        x++;
    }
    string num, str;
    num = num_start;
    str = str_start;
    while (true)
    {
        cout << str << num << endl;
        if (!Next(num, n))
        {
            if (!next_permutation(str.begin(), str.end())) break;
            else
            {
                num = num_start;
            }
        }
    }

    return 0;
}
