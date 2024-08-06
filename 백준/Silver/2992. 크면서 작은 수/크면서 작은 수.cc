#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> X;
int Answer = 9999999;

int main(void)
{

    int Input;
    cin >> Input;

    string Str = to_string(Input);
    for (int i = 0; i < Str.length(); ++i)
    {
        X.push_back((Str[i] - '0'));
    }

    sort(X.begin(), X.end());

    do
    {
        if (X[0] == 0)
            continue;

        string Temp = "";
        for (int i = 0; i < X.size(); ++i)
        {
            Temp += to_string(X[i]);
        }

        if (stoi(Temp) > Input)
        {
            cout << stoi(Temp);
            return 0;
        }
    } while (next_permutation(X.begin(), X.end()));

    cout << 0;
}