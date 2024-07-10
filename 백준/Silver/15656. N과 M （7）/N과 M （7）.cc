#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

int Numbers[9];
int Result[9];
bool Visited[9];

void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i =0 ; i < M; ++i)
        {
            cout << Result[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 0; i < N; ++i)
    {
        Visited[i] = true;
        Result[Depth] = Numbers[i];
        Dfs(Depth + 1);
        Visited[i] = false;
    }
}

int main(void)
{
    cin >> N >> M;
    for(int i = 0; i <N; ++i)
    {
        cin >> Numbers[i];
    }
    
    sort(Numbers, Numbers + N);
    Dfs(0);
    
    
}