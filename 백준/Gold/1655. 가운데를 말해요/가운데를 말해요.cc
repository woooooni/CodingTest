#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	priority_queue<int, vector<int>> MaxQ;
	priority_queue<int, vector<int>, greater<int>> MinQ;

	int N;
	cin >> N;

	int Number;

	for (int i = 0; i < N; ++i)
	{
		cin >> Number;

		if (MaxQ.empty() || MaxQ.size() == MinQ.size())
		{
			MaxQ.push(Number);
		}
		else
		{
			MinQ.push(Number);
		}
		if (!MinQ.empty() && !MaxQ.empty() && MinQ.top() < MaxQ.top())
		{
			int MinTop = MinQ.top();
			int MaxTop = MaxQ.top();

			MinQ.pop();
			MaxQ.pop();

			MinQ.push(MaxTop);
			MaxQ.push(MinTop);
		}

		cout << MaxQ.top() << '\n';
	}

	return 0;
}