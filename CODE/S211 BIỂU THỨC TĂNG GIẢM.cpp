#include <iostream>
#include <vector>
using namespace std;
void proc(string s)
{
    s = s + "I";
    int i,j;
    vector <char> v;
    for (char i='9'; i>='1'; i--) v.push_back(i);
    string res = "";
    for (i=0; i<s.length(); i++) res = res + "x";
    for (i=0; i<s.length(); i++)
        if (s[i] == 'I')
    {
        j = i;
        if (!v.empty()) res[j] = v.back();
        v.pop_back();
        j--;
        while (j>=0 && s[j]=='D')
        {
            if (!v.empty()) res[j] = v.back();
            v.pop_back();
            j--;
        }
    }
    i = res.find('x');
    if (i!=-1){res.erase(i,1);
    res.insert(i,"10");}
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        cout << "Test " << i << ": ";
        proc(s);
    }
    return 0;
}
