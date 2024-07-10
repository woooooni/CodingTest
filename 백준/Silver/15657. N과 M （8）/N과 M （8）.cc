#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

int Numbers[9];
int Result[9];

void Dfs(int InNumber, int Depth)
{
    if(Depth == M)
    {
        sort(Result, Result + M);
        for(int  i = 0 ; i < M; ++i)
        {
            cout << Result[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = InNumber; i < N; ++i)
    {
        Result[Depth] = Numbers[i];
        Dfs(i, Depth + 1);
    }
}

int main(void)
{
    cin >> N >> M;
    for(int i =0 ; i < N; ++i)
    {
        cin >> Numbers[i];
    }
    
    sort(Numbers, Numbers + N);
    Dfs(0, 0);
}