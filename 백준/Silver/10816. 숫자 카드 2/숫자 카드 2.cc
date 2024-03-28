
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <algorithm>


#define MAX_ALPHABET 26
using namespace std;

int main()
{
#pragma region BOJ 10816 숫자카드2
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N;
    

    vector<int> cards;
    cards.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        int input = 0;
        cin >> input;

        cards.push_back(input);
    }

    sort(cards.begin(), cards.end());

    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int input = 0;
        cin >> input;

        cout << upper_bound(cards.begin(), cards.end(), input) - lower_bound(cards.begin(), cards.end(), input) << " ";
    }
#pragma endregion
}