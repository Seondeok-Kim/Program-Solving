#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> cnt(26, 0);

    for (char c : s) {
        c = toupper(c);
        cnt[c - 'A']++;
    }

    int mx = 0, idx = 0;
    bool dup = false;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > mx) {
            mx = cnt[i];
            idx = i;
            dup = false;
        } else if (cnt[i] == mx) {
            dup = true;
        }
    }
    cout << (dup ? '?' : char(idx + 'A'));
    return 0;
}
