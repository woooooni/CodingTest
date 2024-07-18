#include <iostream>



using namespace std;

long long int S;

int main(void)
{
    cin >> S;
    
    
    int Answer = 0;
    while(S > 0)
    {
        Answer++;
        S -= Answer;
    }
    
    if(S < 0)
    {
        Answer--;
    }
    
    cout << Answer;
}