#include <iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[10001] = { 0, };
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) 
        cin >> arr[i];
	int sum = 0, s = 0, e = 0,result = 0;
	while (1) 
    {
		if (sum >= M) 
            sum -= arr[s++];
		else if (e == N) 
            break;
		else 
            sum += arr[e++];
		if (sum == M) 
            result++;
	}
	cout << result;
}