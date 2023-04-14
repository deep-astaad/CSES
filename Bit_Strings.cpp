/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;

int binpow(int a, int b){
	a%=mod;
	int ans=1;
	while(b){
		if(b&1) ans*=a;
		a*=a;
		ans%=mod;
		a%=mod;
		b>>=1;
	}
	return ans;
}
void solve()
{
	int n; cin>>n;
	cout<<binpow(2, n)<<'\n';
}

int32_t main()
{
	deep_aman;
	solve();
	return 0;
}