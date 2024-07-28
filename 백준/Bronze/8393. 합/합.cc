#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    int Sum = 0;
    for(int i = 1; i <= N; ++i)
    {
        Sum += i;
    }
    cout << Sum;
}