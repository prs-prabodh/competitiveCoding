/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, opn = 0, cls = 0;
	string x;
	cin >> n >> x;
	if (n % 2)
	{
		cout << ":(" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] == '(')
			opn++;
		else if (x[i] == ')')
			cls++;
	}
	int reqOpn = n / 2 - opn;
	int reqCls = n / 2 - cls;
	int p = 0;
	while (reqOpn && p < n)
	{
		if (x[p] == '?')
		{
			x[p] = '(';
			reqOpn--;
		}
		p++;
	}
	while (reqCls && p < n)
	{
		if (x[p] == '?')
		{
			x[p] = ')';
			reqCls--;
		}
		p++;
	}
	stack<char> stk;
	for (int i = 0; i < n; i++)
	{
		if (x[i] == '(')
		{
			stk.push('(');
		}
		else
		{
			if (!stk.empty())
			{
				stk.pop();
			}
		}
		if (i < n - 1)
		{
			if (stk.empty())
			{
				cout << ":(" << endl;
				return 0;
			}
		}
		else
		{
			if (!stk.empty())
			{
				cout << ":(" << endl;
				return 0;
			}
		}
	}
	cout << x << endl;
	return 0;
}