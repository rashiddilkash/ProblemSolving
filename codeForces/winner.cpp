#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	unordered_map<string,int> umap;
	int max = -1000;
	string winner;
	while(n--){
		string s;
		int score;
		cin >> s >> score;
		umap[s]+=score;
		if(umap[s]>max){
			max = umap[s];
			winner = s;
		}
	}
	cout << winner << endl;
	return 0;
}