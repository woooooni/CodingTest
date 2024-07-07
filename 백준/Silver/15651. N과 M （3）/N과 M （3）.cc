#include <iostream>


using namespace std;

int Numbers[9];
bool Visited[9];
int N, M;
void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i = 0; i < M; ++i)
        {
            cout << Numbers[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 1; i <= N; ++i)
    {
        Visited[i] = true;
        Numbers[Depth] = i;
        Dfs(Depth + 1);
        Visited[i] = false;
    }
    
}

int main(void)
{
    cin >> N >> M;
    Dfs(0);
    
}