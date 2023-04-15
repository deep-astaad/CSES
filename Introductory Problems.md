## Introductory Problems

### [Weird Algorithm](https://cses.fi/problemset/task/1068)

```cpp
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
```

### [Missing Number](https://cses.fi/problemset/task/1083)

```cpp
void solve()
{
	int n; cin>>n;
	int sum=0;
	for (int i = 0; i < n-1; ++i)
	{
		int x; cin>>x;
		sum+=x;
	}
	cout<<((n*(n+1))/2)-sum<<'\n';
}
```

### [Repetitions](https://cses.fi/problemset/task/1069)

```cpp

```

### [Increasing Array](https://cses.fi/problemset/task/1094)

```cpp
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin>>v[i];

    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        if(v[i] < v[i-1]){
            count+= v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout<<count<<'\n';
}
```

### [Permutations](https://cses.fi/problemset/task/1070/)

```cpp
void solve()
{
    int n; cin>>n;
    if(n==1) cout<<1<<'\n';
    else if (n<4) cout<<"NO SOLUTION"<<'\n';
    else
    {
        for (int i = 2; i <= n; i+=2) cout<<i<<" ";
        for (int i = 1; i <= n; i+=2) cout<<i<<" ";
        cout<<'\n';
    }
}
```

### [Number Spiral](https://cses.fi/problemset/task/1071/)

```cpp
void solve()
{
    int t; cin >> t;
    while (t--)
    {
        int r,c; cin>>r>>c;
        if (r>c)
        {
            if (r % 2 == 0) cout<<(r)*(r)-c+1<<'\n';
            else cout<<(r-1)*(r-1)+c<<'\n';
        }
        else
        {
            if (c%2 ==0) cout<<(c-1)*(c-1)+r<<'\n';
            else cout<<(c)*(c)-r+1<<'\n';
        }
    }
}
```

### [Two Knights](https://cses.fi/problemset/task/1072/)

```cpp
void solve() {
    int n; cin >> n;
    cout << 0 << '\n';
    for (int i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << '\n';
    }
}
```

### [Two Sets](https://cses.fi/problemset/task/1092/)

```cpp
void solve()
{
    int n; cin>>n;
   	int sum = n*(n+1)/2;
   	if(sum%2 == 1) cout<<"NO"<<'\n';
   	else{
   		cout<<"YES"<<'\n';
   		int csum=sum/2;
   		vector<int> first,second;
   		for(int i=n;i>=1;i--){
   			if(i <= csum){
   				first.push_back(i);
   				csum -= i;
   			}
   			else second.push_back(i);
   		}
   		cout<<first.size()<<'\n';
   		printvec(first);
   		cout<<second.size()<<'\n';
   		printvec(second);
   	}
}
```

### [Bit Strings](https://cses.fi/problemset/task/1617/)

```cpp
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
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cout << powMod(2, n) << '\n';
    return 0;
}
```

### [Trailing Zeros](https://cses.fi/problemset/task/1618/)

```cpp
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int ans = 0;
    for (int x = 5; x <= n; x *= 5)
        ans += (n/x);
    cout << ans << '\n';
    return 0;
}
```

### [Coin Piles](https://cses.fi/problemset/task/1754)

```cpp

```

### [Palindrome Reorder](https://cses.fi/problemset/task/1755)

```cpp

```

### [Creating Strings I](https://cses.fi/problemset/task/1622)

```cpp

```

### [Apple Division](https://cses.fi/problemset/task/1623)

```cpp

```

### [Chessboard and Queens](https://cses.fi/problemset/task/1624)

```cpp

```

### [Grid Paths](https://cses.fi/problemset/task/1625)

Regular backtracking will time limit, requires pruning.

- If we reached last pos before last move then return 0
- If we hit a wall from where left and right both sides are unvisited then no matter which we will visit other will be unvisited so return 0.

```cpp

```
