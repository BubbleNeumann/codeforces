// 2023-03-02
// Codeforces Round #855 (Div. 3)
// Problem A

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int len;
    int m = 0, e = 0, o = 0, w = 0;
    string inp;
    cin >> len >> inp;
    for (auto symbol : inp)
    {
        if (symbol == 'm' || symbol == 'M')
        {
            if (e+o+w != 0)
            {
                cout << "no\n";
                return;
            }
            ++m;
        }
        else if (symbol =='e' || symbol == 'E')
        {
            if (o+w != 0 || m == 0)
            {
                cout << "no\n";
                return;
            }
            ++e;
        }
        else if (symbol =='o' || symbol == 'O')
        {
            if (w != 0 || m == 0 || e == 0)
            {
                cout << "no\n";
                return;
            }
           ++o;
        }
        else if (symbol =='w' || symbol == 'W')
        {
            if (m == 0 || e == 0 || o == 0)
            {
                cout << "no\n";
                return;
            }
            ++w;
        }
        else
        {
            cout << "no\n";
            return;
        }
    }
    if (m != 0 && e != 0 && o != 0 && w != 0)
    {
        cout << "yes\n";
    }
    else 
    {
        cout << "no\n";
    }
}



int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

