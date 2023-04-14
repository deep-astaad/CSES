/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

void solve()
{
	int n; cin>>n;
	while(n>1)	{
		cout<<n<<' ';
		if(n&1) n=n*3 + 1;
		else n/=2; 
	}
	cout<<1<<' ';
}

int32_t main()
{
	deep_aman;
	solve();
	return 0;
}