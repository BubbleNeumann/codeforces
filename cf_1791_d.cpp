// 2023-02-03
// Codeforces Round #849 (Div. 4)
// Problem D
// !! ain't solved during the contest

// #include <algorithm>
#include <iostream>
#include <string>
#include <set>

int count_unique(std::string str)
{
    std::set<char> checker(str.begin(), str.end());
    return checker.size();
}

void solve()
{
    int len, max = 0, cur;
    std::string inp;
    std::cin >> len >> inp;
    for (int i = 1; i < len; ++i)
    {
        cur = count_unique(inp.substr(0, i)) + count_unique(inp.substr(i));
        if (cur > max)
        {
            max = cur;
        }
        // max = (cur > max) * cur + !(cur > max) * max;
    }

    std::cout << max << '\n';
}

int main()
{
    int t;
    std::cin >> t;
    // scanf("%d", &t);
    while(t--) solve();
    return 0;
}
