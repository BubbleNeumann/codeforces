// 2022-12-30
// Good Bye 2022: 2023 is NEAR
// Problem B

#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;


    cout << n << ' ';
    for (int i = 1; i < n; ++i)
    {
        if (!i%k)  cout << (n - i + k) << ' ';
        cout << i << ' ';
        
        // i%k ? cout << i : cout << (n - i + k) << ' ' << i ;
    }

    cout << n-1 << '\n';

    
    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0; 
}
