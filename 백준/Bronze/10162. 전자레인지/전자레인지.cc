#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int A, B, C;
int T;
int main(void)
{
    cin >> T;
    
    if(T % 10 != 0)
    {
        cout << -1;
        return 0;
    }
    
    A = T / 300;
    T %= 300;
    
    B = T / 60;
    T %= 60;
    
    C = T / 10;
    T %= 10;
    
    cout << A << " " << B << " " << C;
        
}