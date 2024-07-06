#include <iostream>
#include <string>
#include <vector>


using namespace std;

int N, M;

int Arr[9];
bool Visited[9];

void Dfs(int Num, int Depth)
{
    if(Depth == M)
    {
        for(int i = 0; i < M; ++i)
        {
            cout << Arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = Num; i <= N; ++i)
    {
        if(Visited[i] == false)
        {
            Visited[i] = true;
            Arr[Depth] = i;
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