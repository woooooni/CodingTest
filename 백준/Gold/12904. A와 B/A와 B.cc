#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string S, T;



void Solve()
{
    while(true)
    {
        if(T[T.length() - 1] == 'A')
        {
            T.pop_back();
        }
        else
        {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
        
        if(T.length() == S.length())
        {
            if(T == S)
            {
                cout << 1;
                return;
            }
            else
            {
                cout << 0;
                return;
            }
        }
    }
}

int main(void)
{
    cin >> S >> T;
    
    Solve();
    
}