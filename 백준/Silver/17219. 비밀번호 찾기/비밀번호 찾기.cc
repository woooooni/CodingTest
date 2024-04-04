
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>
#include <queue>
#include <algorithm>
#include <cmath>


#define MAX_ALPHABET 26
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#pragma region BOJ 17219 비밀번호 찾기
    int N, M;
    cin >> N >> M;

    unordered_map<string, string> database;
    for (int i = 0; i < N; ++i)
    {
        string addr, password;
        cin >> addr >> password;
        database.emplace(addr, password);
    }

    for (int i = 0; i < M; ++i)
    {
        string addr;
        cin >> addr;

        string password = database.at(addr);

        cout << password << "\n";
    }
#pragma endregion
}