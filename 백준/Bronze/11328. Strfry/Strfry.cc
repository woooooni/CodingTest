#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	string s1, s2;
	int alphabet[26];
	bool isPossible;
	
	while (N--) 
    {
		cin >> s1 >> s2;
		fill(alphabet, alphabet + 26, 0);
        
		isPossible = true;
		
		for (int i = 0; i < s1.length(); i++) 
        {
			alphabet[s1[i] - 'a']++;
			alphabet[s2[i] - 'a']--;
		}
		
		for (int i = 0; i < 26; i++) 
        {
			if (alphabet[i] != 0) 
            {
				isPossible = false;
				break;
			}
		}
		
		if (isPossible) 
        {
			cout << "Possible\n";
		} 
        else 
        {
			cout << "Impossible\n";
		}
	}
	
	return 0;
}