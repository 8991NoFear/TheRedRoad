#include <bits/stdc++.h>

using namespace std;

int t = 0; // testcases
int n = 0; // length of array a
int a[51] = {0};
int b[51] = {0};
bool m[51] = {false};
int subSum = 0;
bool hasAns = false;

input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void solution() {
    hasAns = true;
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " " ;
    }
    cout << endl;
    return;
}

bool check(int k, int i) {
    if (m[i] == true) {
        return false;
    }

    if ((subSum + a[i]) == 0) {
        return false;
    }

    return true;
}

void TRY(int k) {
    for (int i = 1; i <= n; i++) {
        if (check(k, i)) {
            b[k] = a[i];
            subSum += b[k];
            m[i] = true;
            if (k == n) {
                solution();
            } else {
                TRY(k+1);
            }
            if (hasAns) {
                return;
            }
            m[i] = false;
            subSum -= b[k];
            b[k] = 0;
        }
    }
    return;
}

void solve() {
    cin >> t;
    while (t--) {
        input();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a[i];
        }
        if (sum == 0) {
            cout << "NO" << endl;
        } else {
            // reset variables before recursive
            hasAns = false;
            subSum = 0;
            fill(m, m + n + 1, false);
            TRY(1);
        }
        if (!hasAns) {
            cout << "NO" << endl;
        }
    }
    return;
}

int main()
{
    solve();
    return 0;
}
