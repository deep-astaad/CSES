/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin>>n;
	int two=0;
	int five=0;
	for (int i = 2; i <= n; i*=2)
	{
		two+=n/i;
	}
	for (int i = 5; i <= n; i*=5)
	{
		five+=n/i;
	}
	cout<<min(five, two)<<'\n';
}

int32_t main()
{
	deep_aman;
	solve();
	return 0;
}