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
#pragma region BOJ 2798 블랙잭
	int N, M;

	cin >> N >> M;

	vector<int> cards;
	cards.reserve(N);
	for (int i = 0; i < N; ++i)
	{
		int number = 0;
		cin >> number;
		cards.push_back(number);
	}

	int sum = 0;
	int result = 0;

	int distance = 99999;

	for (int i = 0; i < cards.size(); ++i)
	{
		for (int j = i + 1; j < cards.size(); ++j)
		{
			for (int k = j + 1; k < cards.size(); ++k)
			{
				sum = cards[i] + cards[j] + cards[k];

				if (0 <= M - sum && distance > abs(M - sum))
				{
					result = sum;
					distance = abs(M - sum);
				}
					
			}
		}
	}

	cout << result;
	
#pragma endregion
}