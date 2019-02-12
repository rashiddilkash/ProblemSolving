#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
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
	if (n==1)
	{
		cout << 0 << endl;
		cout << a[0] << endl;
		return 0;

	}
	int sum=0;
	for (int i = 1; i < n; i++)
	{
		if (a[i]+a[i-1]+dp[i-1]<k)
		{
			dp[i]=k-a[i]-a[i-1]-dp[i-1];
			sum+=dp[i];
		}
	}
	cout << sum << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << dp[i]+a[i] << " ";
	}
	cout << endl;
	return 0;
}