#include <iostream>
#include <string>

using namespace std;

int Numbers[10001];

int GetIdx(int Input)
{
    int Result = Input;
    while(Input != 0)
    {
        Result += (Input % 10);
        Input /= 10;
    }
    return Result;
}

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int  i = 1; i <= 10000; ++i)
    {
        int Idx = GetIdx(i);
        if(10000 >= Idx)
        {
            Numbers[Idx] = 1;
        }
    }
    
    for(int  i = 1; i <= 10000; ++i)
    {
        if(Numbers[i] != 1)
        {
            cout << i << "\n";
        }
    }
}