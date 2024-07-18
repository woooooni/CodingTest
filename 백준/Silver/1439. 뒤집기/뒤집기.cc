#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string Input;
    cin >> Input;
    
    int Zero = 0;
    int One = 0;
    
    for(int i =0 ; i < Input.length(); ++i)
    {
        if(Input[i] != Input[i + 1])
        {
            if(Input[i] == '0')
            {
                Zero++;
            }
            else
            {
                One++;
            }
        }
    }
    cout << min(Zero, One);
}