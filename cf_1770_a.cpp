// 2022-12-30
// Good Bye 2022: 2023 is NEAR
// Problem A

#include <algorithm>
#include <iostream>
#include <string>

void solve()
{
    int n, m;
    std::cin >> n >> m;
    unsigned long long int a[n], b[m];
    for (int i = 0; i < n; ++i)
    {
      std::cin >> a[i];
    }
    
    for (int i = 0; i < m; ++i)
    {
      std::cin >> b[i];
    }

    int max = 0;
    for (int i = 0; i < m; ++i) // perform m actions
    {
        int min = 0;
        for (int j = 1; j < n; ++j) // find min
        {
            if (a[j] < a[min]) min = j;
        }
        
        a[min] = b[i];
    }

    unsigned long long int res = 0;
    for (int i = 0; i < n; ++i)
    {
        // cout << res << ' ';
        res += a[i];
    }

    std::cout << res << '\n';
}

int main()
{
    int t;
    std::cin >> t;
    while (t--) solve();
    return 0;
}
