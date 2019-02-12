#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int ax,ay,bx,by,cx,cy;
	cin >> ax >> ay;
	cin >> bx >> by;
	cin >> cx >> cy;
	if (bx < ax && cx < ax && by < ay && cy < ay)
	{
		cout << "YES" << endl;
		return 0;
	}
	else if (bx < ax && cx < ax && by > ay && cy > ay)
	{
		cout << "YES" << endl;
		return 0;
	}
	else if (bx > ax && cx > ax && by > ay && cy > ay)
	{
		cout << "YES" << endl;
		return 0;
	}
	else if (bx > ax && cx > ax && by < ay && cy < ay)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}