#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n = 0;

void solve() {
    pair<string,int> teamA("teamA", 0), teamB("teamB", 0);
    cin >> n;
    cin >> teamA.first;
    teamA.second = 1;
    while (--n) {
        string teamName;
        cin >> teamName;
        if (teamName != teamA.first) { // so sanh 2 xau truc tiep
            if (teamName != teamB.first) { // first time
                teamB.first = teamName;
            }
            teamB.second++;
        } else {
            teamA.second++;
        }
    }
    string winner = (teamA.second > teamB.second) ? teamA.first : teamB.first;
    cout << winner << endl;
    return;
}

int main()
{
    solve();
    return 0;
}
