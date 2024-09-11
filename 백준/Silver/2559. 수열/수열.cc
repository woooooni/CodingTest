#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int N, K;

vector<long long int> Temp;
int main(void)
{
    cin >> N >> K;
    Temp.resize(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> Temp[i];
    }

    int Answer = INT_MIN;
    int Start = 0;
    int End = K - 1;

    int Sum = 0;
    for (int i = 0; i < K; ++i)
    {
        Sum += Temp[i];
    }

    for (int i = 0; i <= N - K; ++i)
    {
        Answer = max(Answer, Sum);

        if (End >= N - 1)
        {
            break;
        }
        else
        {
            Sum -= Temp[Start++];
            Sum += Temp[++End];
        }
    }

    cout << Answer;

}