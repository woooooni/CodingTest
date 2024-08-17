#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string Input;
    string Sum = "";
    cin >> Input;
    
    for(int i =0 ; i < Input.size(); ++i)
    {
        Sum += Input[i];
        if(Sum.length() == 10)
        {
            cout << Sum << "\n";
            Sum = "";
        }
    }
    
    cout << Sum;
}
