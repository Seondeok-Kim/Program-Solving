#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;
    stack<int> st;
    for (int i = 0 ; i < K ; ++i)
    {
        int e;
        
        cin >> e;
        if (e > 0) 
        {
            st.push(e);
        }
        else 
        {   
            st.pop();
        }
    }
    
    int sum = 0;
    while(st.empty() == false)
    {
        sum += st.top();
        st.pop();
    }
    cout << sum << '\n';
	return 0;
}
