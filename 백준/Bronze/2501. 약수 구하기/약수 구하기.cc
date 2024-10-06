#include <iostream>
#include <vector>

using namespace std;

vector<int> answer;


int N, K;

void Calc()
{
    for(int i = 1; i <= N; ++i)
    {
        if(N % i == 0)
        {
            answer.push_back(i);
        }
    }
}

int main(void)
{
    cin >> N >> K;
    Calc();
    
    if(answer.size() < K)
    {
        cout << 0;
    }
    else
    {
        cout << answer[K - 1];
    }
}