#include <iostream>
#include <string>


using namespace std;

bool IsNumber(char c)
{
    return isdigit(c);
}

int main(void)
{
    string Input;
    cin >> Input;
    
    bool bMinus = false;
    
    string NumberStr = "";
    int Sum = 0;
    
    for(int i = 0; i <= Input.length(); ++i)
    {
        if(Input[i] == '+' || Input[i] == '-' || Input.length() == i)
        {
            if(bMinus)
            {
                Sum -= stoi(NumberStr);
                NumberStr = "";
            }
            else
            {
                Sum += stoi(NumberStr);
                NumberStr = "";
            }
            
        }
        else
        {
            NumberStr += Input[i];
        }
        
        if(Input[i] == '-')
        {
            bMinus = true;
        }
    }
    
    cout << Sum;
}