#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        puts(x % 11 * 111 <= x ? "YES" : "NO");
    }
}