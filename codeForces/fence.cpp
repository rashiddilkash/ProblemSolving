#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int dp[n];
	for (int i = 0; i < n; ++i)
	{
		dp[i]=0;
	}
	int min_sum=0;
	for (int i = n-k; i < n; ++i)
	{
		min_sum+=a[i];
	}
	dp[n-k]=min_sum;
	int ans = n-k+1;
	for (int i = n-k-1; i >= 0 ; i--)
	{
		dp[i] = dp[i+1]+a[i]-a[i+k];
		if (dp[i] < min_sum)
		{
			ans = i+1;
			min_sum = dp[i];
		}
	}

	cout << ans << endl;
	return 0;
}