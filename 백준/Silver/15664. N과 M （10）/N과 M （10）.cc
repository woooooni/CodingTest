#include <iostream>
#include <algorithm>

using namespace std;

int Numbers[9];
int Result[9];
bool Visited[9];

int N, M;

void Dfs(int Num, int Depth)
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
    
    int Temp = 0;
    for(int i = Num; i < N; ++i)
    {
        if(Numbers[i] != Temp && Visited[i] == false)
        {
            Visited[i] = true;
            Result[Depth] = Numbers[i];
            Temp = Result[Depth];
            Dfs(i, Depth + 1);
            Visited[i] = false;
        }
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