#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	int temp = ceil(n/2.0);
	
	int t = ceil((float)temp/m);
	if(t*m<=n){
		cout << t*m << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}