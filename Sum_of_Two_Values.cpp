/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n, x; cin>>n>>x;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		v.push_back({x,i+1});
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		int l = i + 1, h = n - 1;
		while(l <= h){
			int mid=l+(h-l)/2;
			if(v[mid].first+v[i].first == x){
				cout<<v[mid].second<<' '<<v[i].second;
				return;
			}
			else if(v[mid].first+v[i].first < x) l=mid+1;
			else h=mid-1;
		}
	}
	cout<<"IMPOSSIBLE";
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