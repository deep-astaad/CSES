/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin>>n;
	int sum=0;
	for (int i = 0; i < n-1; ++i)
	{
		int x; cin>>x;
		sum+=x;
	}
	cout<<((n*(n+1))/2)-sum<<'\n';
}

int32_t main()
{
	deep_aman;
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}