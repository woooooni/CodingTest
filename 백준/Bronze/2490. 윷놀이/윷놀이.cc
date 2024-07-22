#include <iostream>
#include <string>

using namespace std;

string Temp = "EABCD";

int main(void)
{
    int T = 3;
    while(T--)
    {
        int Count = 0;
        for(int i =0 ; i < 4; ++i)
        {
            int Input;
            cin >> Input;
            if(Input == 0)
                Count++;
        }

        cout << Temp[Count] << "\n";
    }
}
    
