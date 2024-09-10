#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <vector>

using namespace std;

struct Cmp
{
public:
    bool operator() (const pair<int, string> a, const pair<int, string> b)
    {
        if (a.first == b.first)
        {
            if (a.second.size() == b.second.size())
            {
                return a < b;
            }
            return a.second.size() > b.second.size();
        }
        return a.first > b.first;
    }
};

int N, M;
int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> N >> M;

    map<string, int> Words;
    vector <pair<int, string>> WordsArr;

    string Input;
    for (int i = 0; i < N; ++i)
    {
        cin >> Input;
        if (Input.size() >= M)
        {
            Words[Input]++;
        }
    }

    for (auto Pair : Words)
    {
        WordsArr.push_back(make_pair(Pair.second, Pair.first));
    }

    sort(WordsArr.begin(), WordsArr.end(), Cmp());

    for (auto Pair : WordsArr)
    {
        cout << Pair.second << "\n";
    }
}
