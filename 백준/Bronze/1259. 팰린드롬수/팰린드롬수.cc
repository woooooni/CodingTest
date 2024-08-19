#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    while(true)
    {
        string Input;
        cin >> Input;
        
        if(Input == "0")
        {
            break;
        }
        
        bool bCorrect = true;
        for(int i = 0; i < Input.length() / 2; ++i)
        {
            if(Input[i] != Input[Input.length() - i - 1])
            {
                bCorrect = false;
                break;
            }
        }
        if(bCorrect)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    
}