#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[2][100]={};
int dem = 0;
long long int sum = 0;
void Try(int i) {
    for(int j = 1;j >= 0;j--) {
        dem += j;
        sum += a[j][i];
        if(sum == k) {
            cout << dem;
            exit(0);
        }
        if(sum < k && i < n - 1) Try(i + 1);
        sum -= a[j][i];
        dem -= j;
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0;i < n;i++) cin >> a[1][i];
    sort(a[1],a[1]+n,greater<int>());
    Try(0);
    cout << -1;
}
