#include <iostream>
#include <string>

using namespace std;

int N, M;
bool Visited[9];
int Selected[9];

void Dfs(int Start, int Depth)
{
    if(Depth == M)
    {
        for(int i = 0; i < M; ++i)
        {
            cout << Selected[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = Start; i <= N; ++i)
    {
        if(Visited[i] == false)
        {
            Visited[i] = true;
            Selected[Depth] = i;
            Dfs(i + 1, Depth + 1);
            Visited[i] = false;
        }
    }
}

int main(void)
{
    cin >> N >> M;
    Dfs(1, 0);
}