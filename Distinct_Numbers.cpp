/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin>>n;
	set<int> st;
	for (int i = 0; i < n; ++i)
	{
		int x; cin>>x;
		st.insert(x);
	}
	cout<<st.size()<<'\n';
}

int32_t main()
{
	deep_aman;
	solve();
	return 0;
}