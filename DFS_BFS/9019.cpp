#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;


int D(int n)
{
    return (n * 2) % 10000;
}

int S(int n)
{
    int m;
    if (n == 0)
        m = 9999;
    else
        m = (n-1);
    return m;
}

int L(int n)
{
    int m;
    m = (n % 1000) * 10 + (n / 1000);
    return m;
}

int R(int n)
{
    int m;
    m = (n % 10) * 1000 + (n / 10);
    return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int start, target;
        cin >> start >> target;

        vector<bool> visited (10000, false);
        queue<pair<int, string>> q;

        visited[start] = true;
        q.push({start, ""});


        while (!q.empty())
        {
            int cur = q.front().first;
            string path = q.front().second;
            q.pop();

            if(cur == target)
            {
                cout << path << endl;
                break;
            }

            // D
            int d = D(cur);
            if(!visited[d])
            {
                visited[d] = true;
                q.push({d, path + "D"});
            }

            // S
            int s = S(cur);
            if(!visited[s])
            {
                visited[s] = true;
                q.push({s, path + "S"});
            }

            // L
            int l = L(cur);
            if(!visited[l])
            {
                visited[l] = true;
                q.push({l,path + "L"});
            }

            // R
            int r = R(cur);
            if(!visited[r])
            {
                visited[r] = true;
                q.push({r, path + "R"});
            }
        }
    }

    return 0;
}