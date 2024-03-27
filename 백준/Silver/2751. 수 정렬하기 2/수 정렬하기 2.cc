#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
#pragma region 2751
	vector<int> inputs;
	int N = 0;

	cin >> N;
	inputs.reserve(N);
	for (int i = 0; i < N; ++i)
	{
		int number;
		cin >> number;

		inputs.push_back(number);
	}
	sort(inputs.begin(), inputs.end(), less_equal<int>());

	for (int i = 0; i < inputs.size(); ++i)
	{
		cout << inputs[i] << "\n";
	}
#pragma endregion
}