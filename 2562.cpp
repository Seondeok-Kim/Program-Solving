#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(9);
    int maxVal = -1;
    int maxId = -1;

    for (int i = 0 ; i < 9; ++i)
    {
        cin >> v[i];
        if(v[i] >= maxVal)
        {
            maxVal = v[i];
            maxId = (i + 1);
        }
        else    continue;
    }

    cout << maxVal << endl;
    cout << maxId << endl;

    return 0;
}
