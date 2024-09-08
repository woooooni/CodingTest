#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int N;
vector<int> Weights;
int main(void)
{
    cin >> N;
    Weights.resize(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> Weights[i];
    }

    sort(Weights.begin(), Weights.end());

    int Answer = 1;
    for (int i = 0; i < Weights.size(); ++i)
    {
        if (Weights[i] > Answer)
        {
            break;
        }
        Answer += Weights[i];
    }
    cout << Answer;
}