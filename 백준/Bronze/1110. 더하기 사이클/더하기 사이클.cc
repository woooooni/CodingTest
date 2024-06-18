#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int Count = 0;
    int N;
    
    
    cin >> N;
    int Result = N;
        
    while(true)
    {   
        ++Count;
        
        int Ten = 0;
        int One = 0;
        int Sum = 0;
        
        Ten = 10 > Result ? 0 : Result / 10;
        One = Result % 10;
        Sum = Ten + One;
        
        Result = (One * 10) + (Sum % 10);
        if(N == Result)
        {
            break;    
        }
    }
    
    cout << Count;
    
    
    
}