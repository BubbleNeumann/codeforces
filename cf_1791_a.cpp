// 2023-02-03
// Codeforces Round #849 (Div. 4)
// Problem A

#include <iostream>
#include <string>

void solve()
{
    
    std::string ref = "codeforces";
    char c;
    std::cin >> c;
    (ref.find(c) != std::string::npos) ? std::cout << "yes\n" : std::cout <<  "no\n";
}

int main()
{
    int t;
    // scanf("%d", &t);
    std::cin >> t;
    while(t--) solve();
    return 0;
}
