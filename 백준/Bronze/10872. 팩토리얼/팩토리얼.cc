#include <iostream>


using namespace std;

int Factorial(int N)
{   
    if(N == 0 || N == 1)
        return 1;
    
    return N * Factorial(N - 1);
}


int main(void)
{
    int N;
    cin >> N;
    
    cout << Factorial(N);
}