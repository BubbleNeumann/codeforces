// 2023-02-03
// Codeforces Round #849 (Div. 4)
// Problem B

#include <iostream>
#include <string>

void solve()
{
    int x = 0, y = 0, n;
    std::string inp;
    std::cin >> n;
    std::cin >> inp;
    for (auto c : inp)
    {
        switch (c)
        {
            case 'U': y += 1; break;
            case 'D': y -= 1; break;
            case 'R': x += 1; break;
            case 'L': x -= 1;
        }

        if ( x == 1 && y == 1)
        {
            std::cout << "YES\n";
            // std::cout << x << ' '<<y<<'\n';
            return;
        }
    }
    std::cout << "NO\n";
}

int main()
{
    int t;
    // scanf("%d", &t);
    std::cin >> t;
    while(t--) solve();
    return 0;
}
