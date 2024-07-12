#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Numbers[9];
int Results[9];
bool Visited[9];

int N, M;

void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i = 0;i <M; ++i)
        {
            cout << Results[i] << " ";
        }
        cout << "\n";
        return;
    }
    int Temp = -1;
    for(int i = 0; i < N; ++i)
    {
        if(Temp == Numbers[i]) 
            continue;
        
        Results[Depth] = Numbers[i];
        Temp = Results[Depth];
        Dfs(Depth + 1);
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
    
    Dfs(0);
}
