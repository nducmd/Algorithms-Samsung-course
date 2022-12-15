#include <bits/stdc++.h>

using namespace std;
void Qsort(vector <int> &v, int left, int right)
{
    int i = left;
    int j = right;
    int k = v[(i+j)/2];
    while (i <= j)
    {
        while (v[i] < k) i++;
        while (v[j] > k) j--;
        if (i <= j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    if (i < right) Qsort(v, i, right);
    if (j > left) Qsort(v, left, j);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        Qsort(v,0,n-1);
        for (auto x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}
