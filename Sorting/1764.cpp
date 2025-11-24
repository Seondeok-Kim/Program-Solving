#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,M ;
    cin >> N >> M;
    vector<string> n_v(N);
    vector<string> m_v(M);

    for(int i = 0 ; i < N ; ++i)
    {
        cin >> n_v[i];
    }
    for(int i = 0 ; i < M ; ++i)
    {
        cin >> m_v[i];
    }

    sort(n_v.begin(), n_v.end());
    sort(m_v.begin(), m_v.end());
    
    vector<string> r_v(0);
    int i = 0;
    int j = 0;
    
    while ((i < N) && (j < M))
    {
        if(n_v[i] == m_v[j])
        {
            r_v.push_back(n_v[i]);
            i++;
            j++;
        }
        else
        {
            if(n_v[i] > m_v[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    
    cout << r_v.size() << '\n';
    for(int i = 0 ; i < r_v.size() ; ++i)
    {
        cout << r_v[i] << '\n';
    }
	return 0;
}
