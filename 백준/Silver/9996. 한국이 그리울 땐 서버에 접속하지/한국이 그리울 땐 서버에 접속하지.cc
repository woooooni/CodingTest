#include <bits/stdc++.h>
using namespace std;


vector<string> split (const string& s,const string& sep)
{
	vector<string> ret;
	int pos = 0;
	while (pos < s.size())
	{
		int nxt_pos = s.find(sep, pos);
		if (nxt_pos == -1) 
            nxt_pos = s.size();
		if (nxt_pos - pos > 0)
			ret.push_back(s.substr(pos, nxt_pos - pos));
		pos = nxt_pos + sep.size();
	}
	return ret;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string s1,s2;
	cin >> n;
	cin >> s1;

	int pos = s1.find("*");
	string first = s1.substr(0, pos);
	string last = s1.substr(pos+1, s1.size());

	while (n--)
	{
		cin >> s2;
		if (s2.size() < first.size() + last.size())
		{
			cout << "NE" << '\n';
			continue;
		}

		if (first == s2.substr(0, first.size()) && last == s2.substr(s2.size() - last.size(), s2.size()))
		{
			cout << "DA" << '\n';
		}
		else
		{
			cout << "NE" << '\n';
		}
		
	}
}