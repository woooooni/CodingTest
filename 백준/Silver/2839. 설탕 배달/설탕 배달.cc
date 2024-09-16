#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int Five,Three;
    cin >> N;
    
    Five = N / 5;
    N %= 5;
    
    while(Five >= 0)
    {
        if((N % 3) == 0)
        {
            Three = N / 3;
            N %= 3;
            break;
        }
        Five--;
        N += 5;
    }
    
    int Answer = N == 0 ? Five + Three : -1;
    cout << Answer;
}