#include<iostream>
#include <string>

using namespace std;
int main() 
{
	string Input;
	cin >> Input;
	for (int i = 0; i < Input.length() / 2; ++i)
	{
		if (Input[i] != Input[Input.length() - 1 - i])
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}