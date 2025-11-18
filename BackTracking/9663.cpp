#include <iostream>

using namespace std;

int     N;
int     cnt = 0;
bool    col[15];
bool    diag1[30];
bool    diag2[30];

void dfs(int row)
{
    if (row == N)
    {
        cnt++;
        return;
    }

    for(int c = 0 ; c < N ; ++c)
    {
        if (col[c]) continue;
        if (diag1[row + c]) continue;
        if (diag2[row - c  +N -1]) continue;

        col[c] = true;
        diag1[row + c] = true;
        diag2[row - c + N - 1 ] = true;

        dfs(row + 1);

        col[c] = false;
        diag1[row + c] = false;
        diag2[row - c + N - 1] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    dfs(0);
    cout << cnt << endl;
    
    return 0;

}