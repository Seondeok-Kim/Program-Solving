#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int cnt = 0;
    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;

    sort(v.begin(), v.end());

    int l = 0;
    int r = n-1;

    // 5 12 7 10 9 1 2 3 11
    // 1 2 3 5 7 9 10 11 12
    while (l<r)
    {
        int sum = v[l] + v[r];
        if(sum == x)
        {
            cnt ++;
            l++;
            r--;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << cnt << '\n';
	return 0;
}
