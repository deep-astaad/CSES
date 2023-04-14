/* Code by : Aman Deep (deep_aman) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int
#define TESTCASE

vector<int> seive(1e6+1);

void init(){
	int n=seive.size();
	seive[1]=1;

	for (int i = 2; i < n; ++i)
		seive[i]=i;

	for (int i = 4; i < n; i+=2)
		seive[i]=2;

	for (int i = 3; i*i < n; i+=2)
		if(seive[i]==i)
			for (int j = i*i; j < n; j+=i)
				if(seive[j]==j) seive[j]=i;
}

void solve()
{
	int n; cin>>n;
	int ans=1, cnt=0;
	while(n>1){
		int spf=seive[n];
		while(n%spf==0){
			n/=spf;
			cnt++;
		}
		ans*=cnt+1;
		cnt=0;
	}
	cout<<ans<<'\n';
}

int32_t main()
{
	deep_aman;
	init();
	int testcase = 1;
	#ifdef TESTCASE
		cin >> testcase;
	#endif
	while (testcase--) solve();
	return 0;
}