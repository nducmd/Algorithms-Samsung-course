#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue <int> pq;
        pq.push(1);
        pq.push(2);
        pq.push(5);
        pq.push(10);
        pq.push(20);
        pq.push(50);
        pq.push(100);
        pq.push(200);
        pq.push(500);
        pq.push(1000);
        int n;
        cin >> n;
        int cnt =0;
        while (n > 0)
        {
            if (n >= pq.top())
            {
                cnt = cnt + n / pq.top();
                n = n % pq.top();
            }
            pq.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}
