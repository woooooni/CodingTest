#include <iostream>
#include <string>
#include <limits.h>

using namespace std;
int main(void)
{
    int N;
    cin >> N;
    
    int Five = N / 5;
    if(N % 5 == 0)
    {
        cout << Five;
        return 0;
    }
    
    while(Five >= 0)
    {
        int Two = (N - (Five * 5)) / 2;
        if((N - (Five * 5)) % 2 == 0)
        {
            cout << Five + Two;
            return 0;
        }
        Five--;
    }
    
    cout << -1;
}