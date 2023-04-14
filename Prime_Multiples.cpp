#include <bits/stdc++.h>
using namespace std;
#define int long long


int rec(vector<int> &v, int n, int i, int k, int p) {
 
	if(i == (int)v.size()) {
		if(k == 0) return 0;
		else if(k % 2) return p;
		else  return -1LL * (p);
	}
 
	int take = 0, nottake = 0;
 
	nottake = rec(v, n, i + 1, k, p);
 
	// int pd = v[i] * p;
	// if(p == (pd / v[i]))
	// 	take = fun(v, n, i + 1, k + 1, p * v[i]);

	take = rec(v, n, i + 1, k + 1, p / v[i]);

	return take + nottake;
}
 

int powerSet(vector<int> &primes, int k, int n){
	int ans=0;

	for(int i=1; i<(1<<k); i++){
		int idx=0, temp=i, p=n, cnt=0;
		while(temp){
			if(temp&1) p/=primes[idx], cnt++;
			idx++;
			temp>>=1;
		}
		if(cnt&1) ans+=p;
		else ans-=p;
	}

	return ans;
}

void solve()
{
	int n, k; cin >> n >> k;
	vector<int> primes(k); 

	for(int i = 0; i < k; i++) 
		cin >> primes[i];

	int ans = 0;

	// ans = rec(primes, n, 0, 0, n);

	ans = powerSet(primes, k, n);

	cout << ans;
}

int32_t main()
{
	solve();
	return 0;
}