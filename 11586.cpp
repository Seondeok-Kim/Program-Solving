#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<string> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }

    int K;
    cin >> K;

    if (K == 1) {
        // 아무것도 안 함
    } else if (K == 2) {
        // 좌우 반전: 각 줄 뒤집기
        for (int i = 0; i < N; ++i)
            reverse(v[i].begin(), v[i].end());
    } else if (K == 3) {
        // 상하 반전: 줄 순서 뒤집기
        reverse(v.begin(), v.end());
    }

    for (int i = 0; i < N; ++i)
        cout << v[i] << '\n';

    return 0;
}
