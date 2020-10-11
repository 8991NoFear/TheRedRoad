#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n = 0;

void solve() {
    cin >> n;
    int res = 0;
    int p = 0, v = 0, t = 0; // petya, vasya and tonya
    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        res = ((p + v + t) > 1) ? res + 1 : res;
    }
    cout << res;
    return;
}

int main()
{
    solve();
    return 0;
}
