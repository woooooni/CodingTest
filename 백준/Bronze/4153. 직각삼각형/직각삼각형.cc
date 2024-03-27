
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define MAX_ALPHABET 26
using namespace std;

int main()
{
#pragma region BOJ 4153 피타고라스
    int a, b, c;

    while (true)
    {
        cin >> a >> b >> c;
        
        if (0 == a && 0 == b && 0 == c)
            return 0;

        if (a > b)
            swap(a, b);

        if (b > c)
            swap(b, c);

        if ((c * c) == ((a * a) + (b * b)))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }
#pragma endregion
}