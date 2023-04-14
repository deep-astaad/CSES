/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	const int maxn = 1e6 + 1;
	vector<int> freq(maxn);
	int n; cin>>n;

	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		freq[x]++;
	}

	vector<int> multiples(maxn);

	for (int i = 1; i < maxn; ++i)
		for (int j = i; j < maxn; j+=i)
			if(freq[j]) multiples[i]+=freq[j];


	int ans=0;
	for (int i = 1; i < maxn; ++i)
		if(multiples[i]>1) ans=i;


	cout<<ans<<'\n';
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