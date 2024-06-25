#include <iostream>


using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    int LeftTotal = 100, RightTotal = 100;
    
    int LeftTotalMinus = 0; 
    int RightTotalMinus = 0;
    
    for(int i = 0; i < N; ++i)
    {
        int Left, Right;
        cin >> Left >> Right;
        
        if(Left == Right)
            continue;
        
        if(Left > Right)
        {
            RightTotalMinus += Left;
        }
        else
        {
            LeftTotalMinus += Right;
        }
    }
    cout << LeftTotal - LeftTotalMinus << "\n";
    cout << RightTotal - RightTotalMinus << "\n";
}