#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int Numbers[9];
bool Visited[9];
int N, M;
void Dfs(int Num, int Depth)
{
    if(Depth == M)
    {
        sort(Numbers, Numbers + M);
        for(int i = 0; i < M; ++i)
        {
            cout << Numbers[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = Num; i <= N; ++i)
    {
        Visited[i] = true;
        Numbers[Depth] = i;
        Dfs(i, Depth + 1);
        Visited[i] = false;
    }
}
int main(void)
{
    cin >> N >> M;
    Dfs(1, 0);
}