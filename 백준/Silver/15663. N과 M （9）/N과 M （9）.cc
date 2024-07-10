#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int Num[9];
bool Visited[9];
int Result[9];

void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i =0 ;  i < M; ++i)
        {
            cout << Result[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    int Temp = 0;
    
    for(int i = 0 ; i < N; ++i)
    {
        if(Num[i] != Temp && false == Visited[i])
        {
            Visited[i] = true;
            Temp = Num[i];
            Result[Depth] = Num[i];
            Dfs(Depth + 1);
            Visited[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i =0 ; i < N ; ++i)
    {
        cin >> Num[i];
    }
    
    sort(Num, Num + N);
    
    Dfs(0);
    
}