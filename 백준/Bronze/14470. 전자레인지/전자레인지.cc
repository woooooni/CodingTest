#include <iostream>


using namespace std;

int A, B, C, D, E;

int main(void)
{
    cin >> A >> B >> C >> D >> E;
    
    int Answer = 0;
    while(A != B)
    {
        if(A < 0)
        {
            Answer += C;
            A++;
        }
        else if(A == 0)
        {
            Answer += D;
            Answer += E;
            A++;
        }
        else
        {
            Answer += E;
            A++;
        }
    }
    
    cout << Answer;
}