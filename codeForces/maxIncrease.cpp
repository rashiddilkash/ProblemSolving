#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long long a[n];
	int count=1;
	int maxInc = 1;
	cin >> a[0];

	for (int i = 1; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]>a[i-1]){
			count++;
			if (count>maxInc)
			{
				maxInc=count;
			}
		}
		else{
			count=1;
		}
	}
	cout << maxInc << endl;


	return 0;
}