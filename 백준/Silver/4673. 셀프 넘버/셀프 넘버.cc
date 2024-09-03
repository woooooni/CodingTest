#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> Ctor;

int GetCtor(int Num)
{
    int Sum = Num;
    while(Num > 0)
    {
        Sum += (Num % 10);
        Num /= 10;
    }
    
    return Sum;
}

int main(void)
{
    Ctor.resize(10002);
    for(int i = 1; i <= 10000; ++i)
    {
        int Idx = GetCtor(i);
        if(Idx <= 10000)
        {
            Ctor[Idx] = i;
        }
    }
    
    for(int i = 1; i <= 10000; ++i)
    {
        if(Ctor[i] == 0)
            cout << i << "\n";
    }
    
}