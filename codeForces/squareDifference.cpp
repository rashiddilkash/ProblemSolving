#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		if (a-b>1)
		{
			cout << "NO" << endl;
			continue;
		}
		long long x = a+b;
		bool prime = (x>=2);
		for (long long i=2; i*i <= x; ++i)
		{
			if (x%i==0)
			{
				prime = false;
				break;
			}
		}
		if (prime)
		{
			cout << "YES" << endl;
		}
		else{
			cout << "NO" <<  endl;
		}
	}
	return 0;
}