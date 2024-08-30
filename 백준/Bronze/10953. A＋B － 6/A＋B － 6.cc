#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

int T;
int main(void)
{
    cin >> T;
    while(T--)
    {
        string Input;
        cin >> Input;
        
        int Left = Input[0] - '0';
        int Right = Input[2] - '0';
        
        cout << Left + Right << "\n";
    }
    
}