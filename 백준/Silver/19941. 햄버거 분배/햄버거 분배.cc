#include <iostream>
using namespace std;
int main()
{
    int N, K, answer = 0;
    string PH;
    cin >> N >> K >> PH;
    for (int idx = 0; idx < N; ++idx)
    {
        if (PH[idx] != 'P')
        {
            continue;
        }

        bool isFind = false;

        for (int len = K; len >= 1; --len)
        {
            if (idx - len < 0)
            {
                continue;
            }

            if (PH[idx - len] == 'H')
            {
                ++answer;
                isFind = true;
                PH[idx - len] = '.';
                break;
            }
        }

        if (!isFind)
        {
            for (int len = 1; len <= K; ++len)
            {
                if (idx + len >= N)
                {
                    break;
                }

                if (PH[idx + len] == 'H')
                {
                    ++answer;
                    PH[idx + len] = '.';
                    break;
                }
            }
        }
    }
    cout << answer;
    return 0;
}