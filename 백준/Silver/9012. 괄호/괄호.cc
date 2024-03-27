
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <algorithm>


#define MAX_ALPHABET 26
using namespace std;

string Check_VPS(string input) {
    stack<char> ps;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            ps.push('(');
        }
        else {
            if (ps.empty()) return "NO";
            ps.pop();
        }
    }
    if (ps.empty()) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main()
{
#pragma region BOJ 9012 VCS 괄호찾기
    int T = 0;
    cin >> T;

    for(int i =0 ; i < T; ++i)
    {
        string input = "";
        cin >> input;
        cout << Check_VPS(input) << "\n";
    }
#pragma endregion
}