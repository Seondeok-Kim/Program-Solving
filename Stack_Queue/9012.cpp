#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<string> v(n);
    
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        stack<char> st;

        for(char c : v[i])
        {
            if (c == '(')
            {
                st.push('(');
            }
            else
            {
                if (st.size() > 0) st.pop();
                else 
                { 
                    st.push(')');
                    break;
                }
            }
        }

        if(st.empty() == true) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        //cout << st.size() << '\n';
        i++;
    }
    
	return 0;
}
