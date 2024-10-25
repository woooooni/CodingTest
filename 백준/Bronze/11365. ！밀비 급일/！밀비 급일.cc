#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    while(true)
    {
        string Input;
        getline(cin, Input);
        
        if(Input == "END")
        {
            return 0;
        }
        
        reverse(Input.begin(), Input.end());
        
        cout << Input << "\n";
    }
}
