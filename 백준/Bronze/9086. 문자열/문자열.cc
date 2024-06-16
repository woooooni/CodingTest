#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    int T;
    cin >> T;
    
    string Input;
    for(int i = 0; i< T; ++i)
    {
        cin >> Input;
        
        cout << Input[0] << Input[Input.length() - 1] << endl;
    }
}