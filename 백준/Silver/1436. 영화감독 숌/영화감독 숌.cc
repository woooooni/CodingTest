#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
#pragma region BOJ 1436 영화감독숌
    int input = 0;
    cin >> input;

    int count = 1;
    int number = 666;
    
    string check = "";
    for (int i = number; true; ++i)
    {
        check = to_string(i);
        if (i != 666 && string::npos != check.find("666"))
        {
            count++;
            number = i;
        }
        
        if (count == input)
            break;
    }
#pragma endregion
    
    cout << number;
}