/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
const int mod = 1e9 + 7;

int binpow(int a, int b, int M){
	a%=M;
	int ans=1;
	while(b){
		if(b&1) ans*=a;
		a*=a;
		a%=M;
		ans%=M;
		b>>=1;
	}
	return ans;
}

#define TESTCASE
void solve()
{
	int a,b,c; cin>>a>>b>>c;

	int x=binpow(b,c,mod-1);
	cout<<binpow(a,x,mod)<<'\n';
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