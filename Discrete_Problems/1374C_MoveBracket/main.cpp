#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t = 0; // so luong test cases
int n = 0; // do dai cua xau s
string s;

void input() {
    cin >> n >> s;
}

// cach 1: khong xoa ky tu
void solve1() {
    cin >> t;
    while (t--) {
        input();
        stack<char> S;
        int idx = 0;
        int res = 0;
        while (idx < s.size()) {
            if (s[idx] == '(') {
                S.push(s[idx]);
            } else {
                if (!S.empty() && s[idx] == ')') {
                    S.pop();
                } else if (S.empty() && s[idx] == ')') {
                    s.push_back(s[idx]);
                    res++;
                    s[idx] = 'x'; // danh dau la khong hop le
                }
            }
            idx++;
        }
        cout << res << endl;
    }
    return;
}

// cach 2: co xoa ky tu
void solve2() {
    cin >> t;
    while (t--) {
        input();
        stack<char> S;
        int idx = 0;
        int res = 0;
        while (idx < s.size()) {
            if (s[idx] == '(') {
                S.push(s[idx]);
                idx++;
            } else if (!S.empty()){
                S.pop();
                idx++;
            } else {
                s.push_back(s[idx]); // day vao cuoi string truoc khi xoa
                s.erase(idx, 1); // xoa tai vi tri idx 1 ky tu
                res++;
                // do co xoa lam don string nen ta khong tang idx
            }
        }
        cout << res << endl;
    }
    return;
}

int main()
{
    solve2();
    return 0;
}
