#include <iostream>

using namespace std;

int main(void)
{
    int L, P, V;
    
    int Day = 1;
    while(true)
    {
        
        cin >> L >> P >> V;
        if(L ==0 && P == 0 && V == 0)
        {
            return 0;
        }
        
        int Answer = (V / P) * L + min(V % P, L);
        
        cout << "Case " << Day << ": " << Answer << "\n";
        Day++;
    }
}