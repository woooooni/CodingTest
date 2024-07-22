#include <iostream>
#include <string>

using namespace std;


bool Check[10001];
int d(int Number) 
{
    
	int Sum = Number;
 
	while (Number != 0) 
    {
		Sum = Sum + (Number % 10);
		Number = Number / 10;
	}
	return Sum;
}
 
int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cout.tie(NULL);

 
	for (int i = 1; i < 10001; i++) 
    {
		int N = d(i);
		if (N < 10001) 
        {
			Check[N] = true;
		}
	}
    
    for (int i = 1; i < 10001; i++) 
    {
        if(Check[i] == false)
        {
            cout << i << "\n";
        }
    }
    
    
	return 0;
}