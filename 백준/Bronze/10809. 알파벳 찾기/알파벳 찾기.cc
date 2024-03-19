
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
#pragma region BOJ 10809
    int alphabets[MAX_ALPHABET] = {};

    for (int i = 0; i < MAX_ALPHABET; ++i)
        alphabets[i] = -1;

    string word;
    cin >> word;

    for (int i = 0; i < word.size(); ++i)
    {
        int index = word[i] - 97;

        if (-1 == alphabets[index])
            alphabets[index] = i;
    }

    for (int i = 0; i < MAX_ALPHABET; ++i)
        cout << alphabets[i] << " ";
}