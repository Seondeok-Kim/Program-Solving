#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    vector<string> v(0);
  
    for(int i = 0 ; i < S.length() ; ++i)
    {
        for(int j = i ; j < S.length() ; ++j)
        {
            v.push_back(S.substr(i,j-i+1));
        }
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    cout << v.size() << '\n';
	return 0;
}
