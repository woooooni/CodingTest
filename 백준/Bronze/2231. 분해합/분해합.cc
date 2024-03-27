
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define MAX_ALPHABET 26
using namespace std;

int main()
{
#pragma region BOJ 2231 분해합
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i < N; i++) 
    {
        int temp = i;
        int sum = i;

        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N)
        {
            cout << i << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';
    return 0;

#pragma endregion
}