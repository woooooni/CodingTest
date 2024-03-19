
#include <iostream>

using namespace std;
int main()
{
    int remains[10];
    int diffNumCount = 0;
    for (int i = 0; i < 10; ++i)
    {
        int input;
        cin >> input;
        remains[i] = input % 42;
    }

    for (int i = 0; i < 10; ++i)
    {
        for (int j = i; j < 10; ++j)
        {
            if (i == j)
                continue;
            if (remains[i] == remains[j])
                remains[j] = -1;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        if (-1 != remains[i])
            ++diffNumCount;
    }

    cout << diffNumCount;
}


