#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n = 0;
const int MAX = 1E7;

bool checkPrime(int x) {
    if (x < 2) {
        return false;
    } else if (x == 2) {
        return true;
    } else {
        int sqrtOfX = sqrt(x);
        for (int i = 2; i <= sqrtOfX; i++) {
            if (x%i == 0) {
                return false;
            }
        }
        return true;
    }
}

void input() {
    cin >> n;
}

void solve() {
    int ans = 1;
    while (n--) {
        for (int i = ans + 1; i <  MAX; i++) {
            if (checkPrime(i)) {
                ans = i;
                cout << ans << " ";
                break;
            }
        }
    }
    return;
}

int main()
{
    input();
    solve();
    return 0;
}
