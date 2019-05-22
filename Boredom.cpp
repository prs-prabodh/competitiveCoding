	/**
	*	@author Prabodh Ranjan Swain
	*	Institution - ASET, New Delhi
	*/
	#include <bits/stdc++.h>
	#define ll long long
	using namespace std;
	unordered_map<int, ll> m;
	ll *dp;
	bool *calculated;
	ll calc(ll x, ll n)
	{
		if(calculated[x] && x<=n)
			return dp[x];
		if (x == n)
			return n*m[n];
		if (x > n)
			return 0;
		dp[x] = max(x*m[x] + calc(x + 2, n), calc(x + 1, n));
		calculated[x] = true;
		return dp[x];
	}
	int main()
	{
		int n;
		cin >> n;
		ll x, mn = LLONG_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			m[x]++;
			mn = max(mn, x);
		}
		dp = new ll[mn+1];
		calculated = new bool[mn + 1];
		memset(calculated, false, (mn+1)*sizeof(bool));
		cout << calc(1, mn) << endl;
		return 0;
	}
