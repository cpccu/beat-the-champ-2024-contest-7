#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            cout << 'a';
        for (int j = 0; j < (n - (i < 2 ? 1 : 0)) / 2; j++)
            cout << char('a' + (i + j) % 24 + 1) << char('a' + (i + j) % 24 + 1);
        if ((n - (i < 2 ? 1 : 0)) % 2)
            cout << 'z';
        cout << "\n";
    }
}