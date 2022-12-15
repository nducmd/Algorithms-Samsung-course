#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int first = 0;
        int last = n-1;
        int flag = 0;
        while (first <= last)
        {
            int pivot = first + (last - first) / 2;
            if (v[pivot] == k) {cout << pivot +1 << endl; flag = 1; break;}
            else
            {
                if (v[pivot] < k) first = pivot + 1;
                else last = pivot - 1;
            }
        }
        if (!flag) cout << "NO" << endl;
    }
    return 0;
}
