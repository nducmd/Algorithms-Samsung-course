#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int res = 0;
    int k ,b ,m;
    cin >> k >> b >> m;
    long p = 1;
    long curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (i) p = (p * b) % m;
        curr_sum = (curr_sum * b + (s[i] - '0')) % m;
    }
    res += (curr_sum % m);
    int j = 0;
    for (int i = k; i < s.length(); i++, j++)
    {
        curr_sum = curr_sum - ((( (s[j]-'0') %m ) * p ) % m);
        if (curr_sum < 0) curr_sum += m;
        curr_sum = (curr_sum * b + (s[i] - '0') % m) % m;
        res += (curr_sum % m);
    }
    cout << res;
    return 0;
}
