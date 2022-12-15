#include <bits/stdc++.h>

using namespace std;
int is(int n)
{
    if (n < 2 || n == 4 || n == 6 || n == 8 || n== 9) return 0;
    return 1;
}
int check(int s)
{
    while (s)
    {
        if (!is(s%10)) return 0;
        s = s/ 10;
    }
    return 1;
}
int main()
{
    unordered_map <int, int> umap;
    int tmp;
    vector <int> v;
    while (cin >> tmp)
    {
        if (check(tmp))
        {
            umap[tmp]++;
            v.push_back(tmp);
        }
    }
    for (auto x : v)
    {
        if (umap[x])
        {
            cout << x << " " << umap[x] << endl;
            umap.erase(x);
        }
    }
    return 0;
}
//123 321 23456 123 123 23456 3523 123 321 4567 8988 878 7654 9899 3456 123 678 999 77 3456 878 987654321 4546 63543 4656 13432 4563 123471 659837 34355 878 9087 77 98534 3456 23132 3523 3523 3523 57275
