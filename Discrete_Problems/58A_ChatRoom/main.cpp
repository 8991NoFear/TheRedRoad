#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string s;

void input() {
    cin >> s;
}

void solve() {
    string hello = "hello";
    int helloIdx = 0;
    string res = "NO";
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == hello[helloIdx]) {
            helloIdx++;
        }

        if (helloIdx >= hello.size()) {
            res = "YES";
            break;
        }
    }
    cout << res;
}

int main()
{
    input();
    solve();
    return 0;
}
