#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int b,k;
	cin >> b >> k;
	int a[k];
	int odd = 0;
	for(int i=0;i<k;i++){
		cin >> a[i];
		if (a[i]%2!=0){
			odd++;
		}
	}
	
	if (b%2==0)
	{
		if (a[k-1]%2==0)
		{
			cout << "even" << endl;
			return 0;
		}
		else{
			cout << "odd" << endl;
			return 0;
		}
	}
	else{
		if (odd%2==0)
		{
			cout << "even" << endl;
			return 0;
		}
		else{
			cout << "odd" << endl;
			return 0;
		}
	}
	return 0;
}