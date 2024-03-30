
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

#pragma region BOJ 10989 정렬 3
    int N = 0;
    cin >> N;

    vector<int> numbers(100001);

    for (int i = 0; i < N; ++i)
    {
        int idx = 0;
        cin >> idx;
        ++numbers[idx];
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j <= numbers[i]; j++)
        {
            cout << i << "\n";
        }
    }

#pragma endregion
}