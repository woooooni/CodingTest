#include <iostream>


using namespace std;

int main(void)
{
    
    int T;
    cin >> T;
    
    for(int i = 0; i < T; ++i)
    {
        int West, East;
        cin >> West >> East;
        
        
        int Temp = 1;
        int Result = 1;
        
        for(int j = East; j > East - West; --j)
        {
            Result *= j;
            Result /= Temp++;
        }
        
        cout << Result << "\n";
    }
    
}