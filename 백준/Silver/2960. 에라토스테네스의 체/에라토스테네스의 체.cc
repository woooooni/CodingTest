#include <iostream>
#include <vector>

using namespace std;
int N, K;

vector<int> Numbers;
int Count = 0;

bool IsPrimeNumber(int Input)
{
    if (Input == -1)
        return false;

    if (Input == 2)
        return true;

    for (int i = 2; i < Input; ++i)
    {
        if (Input % i == 0)
            return false;
    }

    return true;
}

bool Erase(int Number)
{
    for (int i = 0; i < Numbers.size(); ++i)
    {
        if (Numbers[i] % Number == 0)
        {
            ++Count;
            if (Count == K)
            {
                cout << Numbers[i];
                return true;
            }
            Numbers[i] = -1;
        }
    }

    return false;
}

int main(void)
{
    cin >> N >> K;
    for (int i = 2; i <= N; ++i)
    {
        Numbers.push_back(i);
    }

    for (int i = 0; i < Numbers.size(); ++i)
    {
        if (true == IsPrimeNumber(Numbers[i]))
        {
            if (true == Erase(Numbers[i]))
            {
                return 0;
            }
        }
    }

}