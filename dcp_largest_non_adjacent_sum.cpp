/*
*	@author Prabodh Ranjan Swain
*	Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int M = 1e9 + 7;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			int tmp = a[i];
			if (i > 1)
			{
				tmp = max(max(a[i], a[i] + a[i - 2]), a[i - 2]);
			}
			if (i > 2)
			{
				tmp = max(max(tmp, a[i - 3]), a[i - 3] + a[i]);
			}
			a[i] = tmp;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << ' ';
		}
		cout << endl;
		cout << max(a[n - 1], (n > 1 ? a[n - 2] : INT_MIN)) << endl;
	}
	return 0;
}