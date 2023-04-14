/* Code by : Aman Deep (astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;

int naturalSum(int n){
	// n*(n+1)/2 overflow n->1e12
	int a,b;
	if(n&1)
		a=(n+1)/2, b=n;
	else
		a=n/2, b=n+1;

	return ((a%mod)*(b%mod))%mod;
}

void solve()
{
	int n; cin>>n;
	
	int sum=0;
	for (int x = 1; x*x <= n; ++x)
	{
		int cnt = (n/x) - (x - 1);
		cnt %= mod;
		sum += cnt*x;
		sum %= mod;
		sum += naturalSum(n/x) - naturalSum(x);
		sum += mod;
		sum %= mod;
	}

	cout<<sum<<'\n';
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