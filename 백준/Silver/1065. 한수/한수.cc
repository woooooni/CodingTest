#include <iostream>

using namespace std;

int ArithmeticSequence(int Input)
{
	int Count = 0; // 한수 카운팅

	if (Input < 100)
	{
		return Input;
	}
	else
	{
		Count = 99;
		for (int i = 100; i <= Input; i++) {
			int Hun = i / 100;		 // 100의 자릿수
			int Ten = (i / 10) % 10; // 10의 자릿수
			int One = i % 10;		 // 1의 자리수

			if ((Hun - Ten) == (Ten - One)) 
			{ 
				// 각 자릿수가 수열을 이루면
				Count++;
			}
		}
	}
	return Count;
}

int main() 
{

	int N;
	cin >> N;

	int Result = ArithmeticSequence(N);
	cout << Result;
	return 0;
}