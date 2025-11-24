#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> v1(N);
    
    for(int i = 0 ; i < N ; ++i)
    {
        cin >> v1[i];
    }

    int M;
    cin >> M;
    vector<int> v2(M);
    vector<bool> v3(M);
        for(int i = 0 ; i < M ; ++i)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());

    for(int i = 0 ; i < M ; ++i)
    {
        if (binary_search(v1.begin(), v1.end(), v2[i]))
            v3[i] = true;
        else 
            v3[i] = false;
    }


    for(int i = 0 ; i < M ; ++i)
    {
        cout << v3[i] << '\n';
    }
	return 0;
}