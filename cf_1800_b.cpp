// 2023-03-02
// Codeforces Round #855 (Div. 3)
// Problem B

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int len, k, cnt = 0;
    string inp;
    cin >> len >> k >> inp;
    int i = 0;
    char ref;
    int diff = 'a' - 'A';
    while (inp.length() > 0 && i < inp.length())
    {
        // cout << inp[i] << "here\n";
        // cout << inp << '\n';
        ref = inp[i];
        if (inp[i] >= 'A' && inp[i] <= 'Z')
        {
            if (inp.find(inp[i] + diff) != string::npos)
            {
                inp.erase(inp.begin()+i); // erase 1 symbol
                inp.erase(inp.begin()+inp.find(ref + diff));

                ++cnt;
                continue;
            }
        }
        else if (inp[i] >= 'a' && inp[i] <= 'z')
        {
            if (inp.find(inp[i] - diff) != string::npos)
            {
                inp.erase(inp.begin()+i); // erase 1 symbol
                inp.erase(inp.begin()+inp.find(ref - diff));
                ++cnt;
                continue;
            }
        }

        if (inp.find(inp[i], i+1) != string::npos && k > 0)
        {
            inp.erase(inp.begin()+i);
            inp.erase(inp.begin()+inp.find(ref, i));
            --k;
            ++cnt;
            continue;
        }

        ++i;

    }

    cout << cnt << '\n';
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) solve();
    return 0;
}

