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
    iostream::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#pragma region BOJ 11047 동전 0
	int N, K;
	cin >> N >> K;

	vector<int> coins;
	coins.reserve(N + 1);

	for (int i = 0; i < N; ++i)
	{
		int coin;
		cin >> coin;
		coins.push_back(coin);
	}
	
	int sum = 0;
	int ans = 0;
	for (int i = coins.size() - 1; i >= 1; --i)
	{
		int count = (K - sum) / coins[i];

		ans += count;
		sum += count * coins[i];
	}
	ans += K - sum;

	cout << ans;

#pragma endregion
}