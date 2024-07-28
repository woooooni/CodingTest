#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string Input;
    int N;
    cin >> Input >> N;

    int Sum = 0;
    for (int i = 0; i < Input.length(); i++)
    {
        int Temp = Input[Input.length() - (i + 1)];
        if ('0' <= Temp && Temp <= '9')
        {
            Temp = Temp - '0';
        }
        else
        {
            Temp = Temp + 10 - 'A';
        }
        Sum += (Temp * (int)pow(N, i));
    }
    cout << Sum << '\n';

    return 0;
}