#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <queue>
#include <algorithm>


#define MAX_ALPHABET 26
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    stack<int> numbers;
    int K = 0;
    int result = 0;
    cin >> K;
#pragma region BOJ 10773 제로
    for (int i = 0; i < K; ++i)
    {
        int number = 0;
        cin >> number;
        if (0 == number)
        {
            numbers.pop();
            continue;
        }

        numbers.push(number);
    }
    
    int stackSize = numbers.size();
    for (int i = 0; i < stackSize; ++i)
    {
        result += numbers.top();
        numbers.pop();
    }

    cout << result;
#pragma endregion
}