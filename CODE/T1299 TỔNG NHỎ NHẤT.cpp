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
        int tmp;
        priority_queue <int, vector<int>, greater<int>> pq;
        long long s, s1, s2;
        s = s1 = s2 = 0;
        for (int i = 0; i < n ; i++)
        {
            cin >> tmp;
            if (tmp != 0) pq.push(tmp);
        }
        int i = 0;
        while (!pq.empty())
        {
            if (i % 2 == 0) s1 = s1 * 10 + pq.top();
            else s2 = s2 * 10 + pq.top();
            pq.pop();
            i++;
        }
        cout << s1 + s2 << endl;
    }
    return 0;
}
