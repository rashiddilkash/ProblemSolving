#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int dp[n];
	unordered_set<int> u_set;
	u_set.insert(a[n-1]);
	dp[n-1]=1;
	for (int i = n-2; i >= 0; i--)
	{
		if (u_set.find(a[i]) == u_set.end())
		{
			u_set.insert(a[i]);
			dp[i]=dp[i+1]+1;
		}
		else{
			dp[i]=dp[i+1];
		}
	}
	while(m--){
		int t;
		cin >> t;
		cout << dp[t-1] << endl;
	}

	return 0;
}