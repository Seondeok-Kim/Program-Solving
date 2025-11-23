#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int, int> &b)
{   
    if(a.second == b.second)
    {
        return a.first < b.first;
    }    
    return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);
    

    for(int i = 0 ; i < N ; ++i)
    {
        cin >> v[i].first >> v[i].second ;
    }
    
    sort(v.begin(), v.end(), cmp);

        for(int i = 0 ; i < N ; ++i)
    {
        cout << v[i].first << " " << v[i].second << '\n' ;
    }
    
	return 0;
}
