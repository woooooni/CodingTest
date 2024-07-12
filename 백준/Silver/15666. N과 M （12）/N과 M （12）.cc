#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int N, M;

int Results[9];
int Numbers[9];

void Dfs(int Idx, int Depth)
{
    if(Depth == M)
    {
        for(int i =0 ; i < M; ++i)
        {
            cout << Results[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    int Temp = 0;
    for(int i = Idx; i < N; ++i)
    {
        if(Temp == Numbers[i])
            continue;
        
        Results[Depth] = Numbers[i];
        Temp = Results[Depth];
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