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
#pragma region BOJ 10814 이름찾기
    int N = 0;
    cin >> N;

    
    vector<pair<int, string>> accounts;

    accounts.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        int age = 0;
        string name = "";

        cin >> age >> name;

        accounts.push_back(make_pair(age, name));
    }

    stable_sort(accounts.begin(), accounts.end(), [&](pair<int, string> left, pair<int, string> right) {
        if (left.first < right.first)
            return true;
        else
            return false;
    });

    for (int i = 0; i < N; ++i)
        cout << accounts[i].first << " " << accounts[i].second << "\n";
    
#pragma endregion
}