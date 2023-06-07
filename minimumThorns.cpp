#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool isSafe(int n, int m, int x, int y)
{
    if (x <= 0 || y <= 0 || x > n || y > m)
    {
        return 0;
    }
    return 1;
}
int f(int x, int y, int n, int m, vector<int> a, vector<int> b)
{
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = a[0] + dx[i];
        int ny = a[1] + dy[i];
        if (isSafe(n, m, nx, ny))
        {
            if (nx == b[0] && ny == b[1])
            {
                return -1;
            }
            c++;
        }
    }
    return c;
}
int minimumNumberOfThorns(int n, int m, vector<int> a, vector<int> b)
{
    int aa = f(a[0], a[1], n, m, a, b);
    int bb = f(b[0], b[1], n, m, b, a);
    int ans = min(aa, bb);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}