#include <iostream>
#include <algorithm>
using namespace std;

int Result;

int main()
{
	int N,M;
	cin >> N >> M;
	
	if (N == 1)
	{
		Result = 1;
	}
	
	else if (N == 2)
	{
		Result = min(4, (M-1)/2+1);
	}
	
	else
	{
		if (M >= 7)
		{
			Result = M - 2;
		}
		
		else
		{
			Result = min(4, M);
		}
	}
	 
	cout << Result << "\n";
	return 0;
}