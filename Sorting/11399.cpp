#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int time[N] = {0};
    for (int i = 0 ; i < N ; ++i)
    {
        cin >> time[i];
    }
    sort(time, time+N);
    int sum = 0;
    for(int i = 0 ; i < N ; ++i)
    {
        int partial_sum = 0;
        for(int j = 0 ; j <= i ; ++j)
        {
            partial_sum += time[j];
        }
        sum += partial_sum;
    }
    cout << sum << endl;
	return 0;
}
