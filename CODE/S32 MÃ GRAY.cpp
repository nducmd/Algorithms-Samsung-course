#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p = pow(2,n);
        string s[p+2];
        s[1] = "0";
        s[2] = "1";
        for (int j = 2; j <= n; j++)
        {
            int right = pow(2,j);
            int left = 1;
            while (left < right)
            {
                s[right] = s[left];
                s[left] = "0" + s[left];
                s[right] = "1" + s[right];
                left++;
                right--;
            }
        }
        for (int i = 1; i <= p; i++)
            cout << s[i] << " ";
        cout << endl;
    }
    return 0;
}
