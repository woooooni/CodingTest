#include <iostream>
#include <string>


using namespace std;

int main(void)
{
    string Input;
    
    cin >> Input;
    string Sum = "";
    int Result = 0;
    
    bool bMinus = false;
    for(int i = 0; i <= Input.size(); ++i)
    {
        if(Input[i] == '+' || Input[i] == '-' || i == Input.size())
        {
            if(bMinus)
            {
                Result -= stoi(Sum);
                Sum = "";
            }
            else
            {
                Result += stoi(Sum);
                Sum = "";
            }
        }
        else
        {
            Sum += Input[i];
        }
        
        if(Input[i] == '-')
        {
            bMinus = true;
        }
    }
    
    cout << Result;
    
}