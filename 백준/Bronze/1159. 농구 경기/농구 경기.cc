#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <map>

using namespace std;

int N;
int Cnt[26] = {};
int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string Input;
        cin >> Input;

        Cnt[((int)Input[0] - 'a')]++;
    }

    bool bPossible = false;
    for (int i = 0; i < 26; ++i)
    {
        if (Cnt[i] >= 5)
        {
            bPossible = true;
            cout << char('a' + i);
        }
    }

    if (bPossible == false)
    {
        cout << "PREDAJA";
    }

}