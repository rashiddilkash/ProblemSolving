#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s,t;
	cin >> s;
	cin >> t;
	unordered_set<char> s1,s2;
	s1.insert('a');
	s1.insert('e');
	s1.insert('i');
	s1.insert('o');
	s1.insert('u');

	for(int i=0;i<26;i++){
		s2.insert('a'+i);
	}
	s2.erase('a');
	s2.erase('e');
	s2.erase('i');
	s2.erase('o');
	s2.erase('u');

	if (s.size()!=t.size())
	{
		cout<< "No" << endl;
		return 0;
	}
	for (int i = 0; i < s.size(); ++i)
	{
		//cout << s[i] << t[i] << endl;
		if ((s1.find(s[i])!=s1.end() && s1.find(t[i])!=s1.end()) || (s2.find(s[i])!=s2.end() && s2.find(t[i])!=s2.end()))
		{
			continue;
		}
		else{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}