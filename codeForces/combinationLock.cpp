#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		int a,b;
		a = s1[i]-'0';
		b = s2[i]-'0';
		if (abs(a-b)<10-abs(a-b))
		{
			sum += abs(a-b);
		}
		else{
			sum += abs(10-abs(a-b));
		}
	}
	cout << sum << endl;

	return 0;
}