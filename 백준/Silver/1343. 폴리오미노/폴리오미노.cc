#include <iostream>
#include <string>
#include <vector>

using namespace std;


static vector<string> answer;

bool Calculate(string word) {
	int size = word.size();
	if (size % 2 != 0) {
		answer.clear();
		answer.push_back("-1");
		return true;
	}
	while (size > 0) {
		if (size - 4 >= 0) {
			answer.push_back("AAAA");
			size -= 4;
		}
		else {
			answer.push_back("BB");
			size -= 2;
		}
	}
	return false;
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string input;
	cin >> input;
	string word;
	bool flag = false;

	for (int i = 0; i < input.size(); i++) {
		switch (input[i]) 
        {
		case 'X':
			word.push_back(input[i]);
			break;

		case '.':
			if (Calculate(word)) 
            {
				flag = true;
				break;
			}
			else 
            {
				word.clear();
				answer.push_back(".");
			}
		}
		if (flag) break;
	}
    
	if (!word.empty()) 
        Calculate(word);

	for (int i = 0; i < answer.size(); i++) 
        cout << answer[i];

}