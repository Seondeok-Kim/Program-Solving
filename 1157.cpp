#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> cnt(26,0);
    bool same = false;
    
    
    for(char c: s)
    {
        c = toupper(c);
        cnt[c-'A']++;
    }

    char m;
    int maxVal = 0, idx = 0;
    for(int i = 0 ; i < 26 ; ++i)
    {
        if(cnt[i] > maxVal)
        {
            maxVal = cnt[i];
            idx = i;
            same = false;
        }
        else if (cnt[i] == maxVal)
        {
            same = true;
        }
        else 
        {
            continue;
        }
   
    }

    if (same == false)
    {
        cout << char(idx + 'A') << endl;
    }
    else
    {
        cout << "?" << endl;
    }

    return 0;
}
