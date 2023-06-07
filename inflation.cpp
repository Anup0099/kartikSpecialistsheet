#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		int n;
		long double k;
		cin >> n >> k;
		long double a[n];
		int flag = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		long double s1 = 0.0;
		long double s2 = 0.0;
		for (int i = 1; i < n; i++)
		{
			s2 = s2 + a[i - 1];
			s1 = s1 + a[i - 1];
			if (a[i] / s1 * ((1.0 * 100)) > k)
			{
				long double s = ((a[i] * (1.0 * 100)) / k) - s1;
				s = ceil(s);
				s1 = s1 + s;
			}
		}
		cout << (long long int)(s1 - s2) << "\n";
	}
#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
	return 0;
}