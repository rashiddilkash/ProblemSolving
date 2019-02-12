#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int n = s.size();
	if (n<7)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i <= n-7; ++i)
	{
		string temp = s.substr(i,7);
		if (temp == "0000000" || temp == "1111111")
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}