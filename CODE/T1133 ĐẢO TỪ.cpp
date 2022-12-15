#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string tmp,s;
        getline(cin,s);
        stringstream ss(s);
        while (ss >> tmp)
        {
            reverse(tmp.begin(), tmp.end());
            cout << tmp << " ";
        }
        cout<< endl;
    }
    return 0;
}
