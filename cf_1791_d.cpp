// 2023-02-03
// Codeforces Round #849 (Div. 4)
// Problem D
// !! ain't solved

#include <iostream>
#include <string>
#include <algorithm>

void solve()
{
    int len, unique_chars_cnt = 1;
    std::string inp, substr;
    std::cin >> len >> inp;
    int substr_len = 1;
    while(unique_chars_cnt == substr_len++ && (substr_len < len - 1))
    {
        substr = inp.substr(0, substr_len-1);
        std::sort(substr.begin(), substr.end());
        unique_chars_cnt = unique(substr.begin(), substr.end()) - substr.begin();
        // ++substr_len;
    }
    
    // --substr_len;
    substr_len = substr.length();
    substr = inp.substr(substr_len);
    std::sort(substr.begin(), substr.end());
    unique_chars_cnt = unique(substr.begin(), substr.end()) - substr.begin();
    std::cout << substr_len << ' ' << unique_chars_cnt << '\n';
}

int main()
{
    int t;
    std::cin >> t;
    while(t--) solve();
    return 0;
}
