#include <iostream>
#include <algorithm>

using namespace std;

long long solutions[5001];
int answerValues[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(); 
	cout.tie();

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
		cin >> solutions[i];
	sort(solutions, solutions + N);

	long long ansVal = 3000000000;
	int p1 = 0, p2 = 1, p3 = 2;
	for (int p1 = 0; p1 < N - 2; ++p1)
	{
		p2 = p1 + 1;
		p3 = N - 1;
		while (p2 < p3)
		{
			long long tempVal = (solutions[p1] + solutions[p2] + solutions[p3]);
			long long absTempVal = abs(tempVal);
			if (absTempVal < ansVal)
			{
				answerValues[0] = solutions[p1];
				answerValues[1] = solutions[p2];
				answerValues[2] = solutions[p3];
				ansVal = absTempVal;
			}

			if (tempVal < 0) p2++;
			else p3--;
		}
	}
	
	for (int i = 0; i < 3; ++i)
		cout << answerValues[i] << ' ';
}