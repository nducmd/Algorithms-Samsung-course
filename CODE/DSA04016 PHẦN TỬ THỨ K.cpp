#include <bits/stdc++.h>
using namespace std;
void Run()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k,tmp;
        cin >> n >> m >> k;
        vector <int> v(n+m);
        for (int i = 0; i< n + m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout << v[k-1] << endl;
    }
}
int main()
{
    Run();
    return 0;
}
