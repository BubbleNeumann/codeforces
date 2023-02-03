// 2023-02-03
// Codeforces Round #849 (Div. 4)
// Problem C

#include <iostream>
#include <string>

void solve()
{
    int count = 0, len;
    std::string inp;
    std::cin >> len >> inp;
    for (int i  = 0; i < len/2; ++i)
    {
        if (inp[i] != inp[len - 1 - i])
        {
            count += 1;
        }
        else
        {
            break;
        }
    }

    std::cout << len - (count * 2) << '\n';
}

int main()
{
    int t;
    std::cin >> t;
    while(t--) solve();
    return 0;
}
