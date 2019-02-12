#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	cin >> n;
	vector<long long int> dp(101,0);

	dp[0] = 0;
	long long int temp;
	long long int i = 0;
	while(i < 101)
	{
		if (i>=100)
		{
			temp = i/100;
			dp[i] = temp + dp[i-temp*100];
		}
		else if (i>=20)
		{
			temp = i/20;
			dp[i] = temp + dp[i-temp*20];
		}
		else if (i>=10)
		{
			temp = i/10;
			dp[i] = temp + dp[i-temp*10];
		}
		else if (i>=5)
		{
			temp = i/5;
			dp[i] = temp + dp[i-temp*5];
		}
		else{
			dp[i] = i;
		}
		i++;
	}
	long long int ans = n/100+dp[n-(n/100)*100];
	cout << ans << endl;
	return 0;
}