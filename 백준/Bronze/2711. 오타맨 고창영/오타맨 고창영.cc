#include <iostream>
#include <string>


using namespace std;

int T;

int main(void)
{
    cin >> T;
    
    
    while(true)
    {
        int Idx = 0;
        string Input;
        cin >> Idx;
        cin >> Input;
        
        if(cin.fail())
        {
            return 0;
        }
        
        for(int i =0 ; i < Input.size(); ++i)
        {
            if(i == Idx - 1)
            {
                continue;
            }
            cout << Input[i];
        }
        
        cout << "\n";
        
    }
}