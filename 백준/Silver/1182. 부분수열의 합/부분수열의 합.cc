#include <iostream>
#include <vector>

using namespace std;

int N, S;

bool Visited[21];
int Nums[21];
int Answer = 0;

void Dfs(int Depth, int Sum)
{
    if(Depth == N)
    {
        return;
    }
        
    if(Sum + Nums[Depth] == S)    
        Answer++;    
        
    Dfs(Depth + 1, Sum);
    Dfs(Depth + 1, Sum + Nums[Depth]);
}

int main(void)
{   
    cin >> N >> S;
    
    for(int i = 0; i < N; ++i)
    {
        cin >> Nums[i];
    }
    
    Dfs(0, 0);
    cout << Answer;
}