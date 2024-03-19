
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{


#pragma region BOJ 10818
    int minNum, maxNum;
    int numCount;
    cin >> numCount;

    for (int i = 0; i < numCount; ++i)
    {
        int num;
        cin >> num;
        if (0 == i)
        {
            minNum = num;
            maxNum = num;
            continue;
        }

        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
    }

    cout << minNum << " " << maxNum;
#pragma endregion
}