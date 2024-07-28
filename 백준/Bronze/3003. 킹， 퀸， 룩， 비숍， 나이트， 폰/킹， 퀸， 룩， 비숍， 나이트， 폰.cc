#include <iostream>
#include <string>

using namespace std;

int Correct[6] = {1, 1, 2, 2, 2, 8};

int main(void)
{
    for(int i =0 ; i < 6; ++i)
    {
        int Input;
        cin >> Input;
        cout << Correct[i] - Input << " ";
    }
}