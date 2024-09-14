#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int N;
bool IsPrime(int n) 
{
	for (int i = 2; i <= sqrt(n); i++) 
    {
		if (n % i == 0) 
        {
			return false;
		}
	}
	return true;
}

void Dfs(int Depth, int Sum)
{
    if(Depth == N)
    {
        cout << Sum << "\n";
        return;
    }
    
    for(int i = 1; i < 10; ++i)
    {
        int Next = Sum * 10 + i;
        if(IsPrime(Next))
        {
            Dfs(Depth + 1, Next);
        }
    }
    
    
}

int main(void)
{
    cin >> N;
    Dfs(1, 2);
    Dfs(1, 3);
    Dfs(1, 5);
    Dfs(1, 7);
}