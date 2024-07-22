#include <iostream>

using namespace std;

int main(void)
{
    
    int Coins[] = {500, 100, 50, 10, 5, 1};
    int Answer = 0;
    int Input;
    cin >> Input;
    int Remain = 1000 - Input;
    
    for(int  i =0 ; i < 6; ++i)
    {
        while(Remain >= Coins[i])
        {
            Remain -= Coins[i];
            ++Answer;
        }
    }
    
    cout << Answer;
    
    
}