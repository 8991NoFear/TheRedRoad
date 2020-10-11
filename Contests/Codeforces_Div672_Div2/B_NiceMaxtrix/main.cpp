#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t = 0;
int n, m;

int nice(int a, int b, int c, int d) {
    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);
    int res = 0;
    for (int i = 1; i < 4; i++) {
        if (arr[i] != arr[i-1]) {
            res++;
        }
    }
    return res;
}

void solve() {
    cin >> t;
    while (t--) {
        int a[n][m] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int res = 0;
        for (int i = 0; i <= n/2; i++) {
            for (int j = 0; j <= m/2; j++) {
                res += nice(a[i][j], a[n-1-i][j], a[i][m-1-j], a[n-1-i][m-1-j]);
            }
        }
        cout << res << endl;
    }
}



int main()
{
    solve();
    return 0;
}
