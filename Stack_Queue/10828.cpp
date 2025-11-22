#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N ;

    stack<int> st;

    while (N > 0)
    {
        string order;
        
        cin >> order;

        if (order == "push")
        {
            int element;
            cin >> element;
            st.push(element);
        }
        else if (order == "pop")
        {
            if (st.empty() == true)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }
        else if (order == "size")
        {
            cout << st.size() << endl;
        }
        else if (order == "empty")
        {
            if (st.empty() == true)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (order == "top")
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << st.top() << endl;
            }
        }
        N--;
    }

    return 0;
}
